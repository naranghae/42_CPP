/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:11:39 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/02 13:54:34 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name)
{
	this->name = zombie_name;
}

Zombie::Zombie():name("") {}

Zombie::~Zombie() {}

void	Zombie::Announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}