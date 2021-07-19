/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 20:06:04 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{;
	int			N;
	int			i;
	std::string	name;
	Zombie 		*horde;


	std::cout << "생성할 좀비 수: ";
	std::cin >> N;
	std::cin.ignore();
	std::cout << "zombie 떼거리 이름은? : ";
	getline(std::cin, name);
	horde = zombieHorde(N, name);
	for(i = 0;i < N; i++)
		horde[i].Announce();
	delete [] horde;
	return (0);
}
