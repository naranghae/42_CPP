/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 20:06:04 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():type(""){}
Weapon::~Weapon(){}

Weapon::Weapon(std::string const &type):type(type){}

void Weapon::setType(const std::string& type)
{
	this->type = type;
}

const std::string& Weapon::getType(void)
{
	return (this->type);
}