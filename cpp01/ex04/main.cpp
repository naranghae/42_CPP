/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/02 19:20:41 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void	ft_replace(std::ifstream& rf, std::string name, std::string s1, std::string s2)
{
	std::ofstream	refile;
	std::size_t		pos;
	std::size_t		i;
	std::string		file;

	i = 0;
	refile.open(name + ".replace", std::ios_base::trunc | std::ios_base::out);
	if (refile.is_open())
	{
		std::getline(rf, file, '\0');
		pos = file.find(s1); //  first index
		if (pos == std::string::npos) // 만약 찾는 문장이 없으면
		{
			std::cout << "Error: `" << s1 << "` is a string that is not in the text file." << std::endl;
			refile << "Error: s1 is a string that is not in the text file.";
			refile.close();
			return ;
		}
		while (pos != std::string::npos)
		{
			while (i != pos)
				refile << file[i++];
			refile << s2;
			i += s1.size();
			pos = file.find(s1, i);
		}
		while (i != file.size()) //남은 문장
			refile << file[i++];
	}
	else
		std::cout << "Error: " << name << ".replace"  << "was not created" << std::endl;
	refile.close();
	return ;
}

std::string	is_empty(std::string s1, std::string s2)
{
	if (s1.length() == 0)
		return ("s1 is Empty");
	if (s2.length() == 0)
		return ("s2 is Empty");
	return ("noproblem");
}

int		main(int argc, char **argv)
{
	std::ifstream	readFile;
	std::string		s1;
	std::string		s2;
	std::string		error;

	if (argc != 4)
	{
		std::cout << "argument error" << std::endl;
		return (0);
	}
	readFile.open(argv[1]);
	s1 = argv[2];
	s2 = argv[3];
	if (readFile.is_open())
	{
		error = is_empty(s1, s2);
		if ((error.compare("noproblem")) == 0)
			ft_replace(readFile, argv[1], s1, s2);
		else
			std::cout << error << std::endl;
	}
	else
		std::cout << "Error: " << argv[1] << " not found" << std::endl;
	readFile.close();
	return (0);
}
