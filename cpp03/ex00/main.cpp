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

int		main(void)
{
	ClapTrap  lostark("sorceress");

	lostark.attack("Baltan");
	lostark.takeDamage(5);
	lostark.useSkill("Baltan");
	lostark.showState();
	lostark.beRepaired(5);
	lostark.showState();
	lostark.takeDamage(10);
	lostark.takeDamage(10);
	lostark.attack("Baltan");
	return (0);
}
