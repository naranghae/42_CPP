/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap Summoner("summoner");

	Summoner.whoAmI();
	Summoner.attack("valtan");
	Summoner.takeDamage(10);
	Summoner.showState();
	Summoner.useSkill("valtan");
	Summoner.showState();
	Summoner.beRepaired(30);
	Summoner.showState();
	Summoner.guardGate();
	Summoner.highFivesGuys();
	return (0);
}
