/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 09:23:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type(""){}

AMateria::~AMateria(){}

AMateria::AMateria(std::string const & type): type(type){}

std::string const &AMateria::getType() const
{
	return this->type;	
}

void AMateria::use(ICharacter& target){
	(void) target;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	this->type = src.type;
	return *this;
}

AMateria::AMateria(AMateria const &src)
{
	this->type = src.type;
}