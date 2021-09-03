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

int		main(void)
{
	ClapTrap	sorceress("sorceress");
	ScavTrap	martial_artist("martial artist");
	FragTrap	fighter("fighter");

	sorceress.showState();
	martial_artist.showState();

	sorceress.useSkill("martial artist");
	martial_artist.takeDamage(20);
	sorceress.beRepaired(20);

	martial_artist.attack("sorceress");
	sorceress.takeDamage(20);

	sorceress.showState();
	martial_artist.showState();

	sorceress.beRepaired(5);
	martial_artist.beRepaired(5);

	sorceress.showState();
	martial_artist.showState();

	martial_artist.guardGate();

	fighter.showState();
	fighter.attack("argus");
	fighter.takeDamage(90);
	fighter.beRepaired(10);
	fighter.showState();
	fighter.highFivesGuys();
	return (0);
}
