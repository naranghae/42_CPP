/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/02 13:49:50 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie *zom;
	std::string name;
	std::string randomName[6] = {"jinbekim", "hyopark", "hson", "hekang", "ghong", "sushin"};
	int	num;
	srand((unsigned int)time(NULL));
	std::cout << "zombie 이름은? : ";
	getline(std::cin, name);
	zom = newZombie(name);
	std::cout << "newZombie :: ";
	zom->Announce();
	std::cout << "randomChump :: ";
	num = rand() % 6;
	//std::cout << num << std::endl;
	randomChump(randomName[num]);
	delete zom;
	return (0);
}
