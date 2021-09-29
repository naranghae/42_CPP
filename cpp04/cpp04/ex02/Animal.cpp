/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Unknown")
{
	std::cout << "Default value Constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called." << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy Constructor called." << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal equal operator called." << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Non-inherited Animal sounds." << std::endl;
}