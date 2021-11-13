/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 10:03:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	typedef Form* (*reqFunc)(std::string const&);
	struct internForm {
		std::string name;
		reqFunc		req;
	};
	internForm formList[3];

public:
	Intern();
	virtual ~Intern();
	Intern(Intern const &src);
	Intern &operator=(Intern const &src);
	Form *makeForm(std::string reqName, std::string target);
};

Form *createSCF(std::string const &target);
Form *createRRF(std::string const &target);
Form *createPPF(std::string const &target);

#endif
