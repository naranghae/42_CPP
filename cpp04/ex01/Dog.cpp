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
	this->brain = new Brain();
	std::cout << "Dog Constructor called." << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called." << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy Constructor called." << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog equal operator called." << std::endl;
	if (this != &src)
	{
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Wang! Wang!Kking~~ Kking~~~" << std::endl;
}

void Dog::setIdeas(int i, std::string idea)
{
	std::cout << "Dog [" << i << "]" << "Brain Storming!!!" << std::endl;
	brain->setIdeas(i, idea);
}

void Dog::printIdeas() const
{
	std::cout << type << "print " << std::endl;
	brain->printIdeas();
}