/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat Constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat copy Constructor called." << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	std::cout << "WrongCat equal operator called." << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat Nyang~ Nyang~" << std::endl;
}