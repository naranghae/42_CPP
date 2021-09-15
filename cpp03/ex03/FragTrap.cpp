/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName):ClapTrap(newName)
{
	std::cout << "FragTrap Default value Constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->Name << " request high five!!!!" << std::endl;
}
