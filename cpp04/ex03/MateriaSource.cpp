/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 09:39:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): max(0){}

MateriaSource::~MateriaSource()
{
	for(int i = 0 ; i < max; i++)
		delete src[i];
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for(int i = 0;src.max; i++)
		this->learnMateria(src.src[i]->clone());
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->max == 4 || m == 0)
		return ;
	this->src[this->max++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0 ; i < this->max; i++)
	{
		if (this->src[i]->getType() == type)
			return this->src[i]->clone();
	}
	return NULL;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	this->max = src.max;
	for(int i = 0 ; i < src.max; i++)
		this->learnMateria(src.src[i]->clone());
	return *this;
}