/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy Constructor called." << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat equal operator called." << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Nyang~ Nyang~ veryvery MewMew~~" << std::endl;
}