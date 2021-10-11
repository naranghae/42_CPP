/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:32:43 by chanykim          #+#    #+#             */
/*   Updated: 2021/09/30 14:30:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

class Form{
private:
	const std::string name;
	const int	gradeSign;
	const int	gradeExecute;
	bool	isSigned;

public:
	Form();
	virtual ~Form();

	Form(std::string name, int gradeSign, int gradeExecute);
	Form(Form const &src);
	Form &operator=(Form const &src);

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeSign() const;
	int			getGradeExecute() const;
	void		signCheck(Bureaucrat &bureaucrat);

	class GradeTooHighException: public std::exception{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		public:
			const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Form const &src);

#endif