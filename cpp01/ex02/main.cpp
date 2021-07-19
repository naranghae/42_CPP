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

# include <iostream>
# include <string>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;
	
	std::cout << "(basic) str: " << str << std::endl;
	std::cout << " (ptr)  str: " << *str_ptr << std::endl;
	std::cout << " (ref)  str: " << str_ref << std::endl;

	return (0);
}
