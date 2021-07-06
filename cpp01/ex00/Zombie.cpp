/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:11:39 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 19:23:29 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name)
{
	this->name = zombie_name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::Announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}