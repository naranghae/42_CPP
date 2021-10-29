/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:32:43 by chanykim          #+#    #+#             */
/*   Updated: 2021/10/02 11:21:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5), target("Unknown")
{
	std::cout << "PresidentialPardonForm Constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target):
	Form("PresidentialPardonForm", 25, 5), target(_target)
{
	std::cout << "PresidentialPardonForm Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
	Form("PresidentialPardonForm", 25, 5), target(src.target)
{
	std::cout << "PresidentialPardonForm copy Constructor called." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zafod Deeblebrox." << std::endl;
}