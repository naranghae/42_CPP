/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/10/11 08:39:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	formList[0].name = "robotomy request";
	formList[0].req = createRRF;
	formList[1].name = "Shrubbery Creation";
	formList[1].req = createSCF;
	formList[2].name = "Presidential Pardon";
	formList[2].req = createPPF;
	std::cout << "Intern Constructor called." << std::endl;
}

Intern:: ~Intern()
{
	std::cout << "Form Destructor called." << std::endl;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Form *createSCF(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *createRRF(std::string const &target)
{
	return new RobotomyRequestForm(target);
}
Form *createPPF(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0 ; i < 3; i++)
	{
		if (name == this->formList[i].name)
		{
			Form* form = this->formList[i].req(target);
			std::cout << "Intern creates " << form->getName() << "." << std::endl;
			return form;
		}
	}
	std::cout << "Intern cannot create " << name << "." << std::endl;
	return NULL;
}