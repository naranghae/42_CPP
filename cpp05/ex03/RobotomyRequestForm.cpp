/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:32:43 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 10:02:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45), target("Unknown")
{
	std::cout << "RobotomyRequestForm Constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm equal operator called." << std::endl;
	if(this != &src)
		this->target = src.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target):
	Form("RobotomyRequestForm", 72, 45), target(_target)
{
	std::cout << "RobotomyRequestForm Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
	Form("RobotomyRequestForm", 72, 45), target(src.target)
{
	std::cout << "RobotomyRequestForm copy Constructor called." << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	srand((unsigned int)time(NULL));
	if (std::rand() % 2) {
		std::cout << "DRRRRRRRRRRRILLLLLLLLLLL" << std::endl;
		std::cout << getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
	}
	else {
		std::cout << "DRRRRRRRRRRRILLLLLLLLLLL" << std::endl;
		std::cout << getTarget() << " unfortunately failed." << std::endl;
	}
}