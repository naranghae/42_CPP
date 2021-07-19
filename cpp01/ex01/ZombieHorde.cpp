/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:34:14 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 20:06:24 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;
	int	num;
	std::string horde_name;
	std::string randomName[6] = {"jinbekim", "hyopark", "hson", "hekang", "ghong", "sushin"};
	
	srand((unsigned int)time(NULL));
	Zombie *zombie_create = new Zombie[N];
	for(i = 0 ;i < N; i++)
	{
		num = rand() % 6;
		horde_name = name + "(" + randomName[num] + ")";
		zombie_create[i].setName(horde_name);
	}
	return (zombie_create);
}
