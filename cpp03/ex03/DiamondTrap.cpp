/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(std::string newName):ClapTrap(newName), FragTrap(newName), ScavTrap(newName)
{
	std::cout << "DiamondTrap Default value Constructor called" << std::endl;
	this->Name = newName;
	ClapTrap::Name = this->Name + "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void  DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap Name: " << this->Name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::Name << std::endl;
}