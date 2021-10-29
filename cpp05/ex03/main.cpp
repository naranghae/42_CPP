/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	Intern_test(std::string const &name, std::string const &target)
{
	Intern  someRandomIntern;
	Form* rrf;
	Bureaucrat internB("bure", 42);

	rrf = someRandomIntern.makeForm(name, target);
	if (rrf)
	{
		try
		{
			std::cout << internB;
			internB.signForm(*rrf);
			std::cout << *rrf << std::endl;
			internB.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete rrf;
	}
	std::cout << std::endl;
}

int		main()
{
	Intern_test("robotomy request", "Bender");
	Intern_test("Shrubbery Creation", "Dender");
	Intern_test("Presidential Pardon", "Cender");
	Intern_test("UnknownForm", "Aender");
}
