/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy Constructor called." << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog equal operator called." << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Wang! Wang!Kking~~ Kking~~~" << std::endl;
}