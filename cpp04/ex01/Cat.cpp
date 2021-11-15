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
	this->brain = new Brain();
	std::cout << "Cat Constructor called." << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called." << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy Constructor called." << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat equal operator called." << std::endl;
	if (this != &src)
	{
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Nyang~ Nyang~ veryvery MewMew~~" << std::endl;
}

void Cat::setIdeas(int i, std::string idea)
{
	std::cout << "Cat [" << i << "]" << "Brain Storming!!!" << std::endl;
	brain->setIdeas(i, idea);
}

void Cat::printIdeas() const
{
	std::cout << type << "print " << std::endl;
	brain->printIdeas();
}