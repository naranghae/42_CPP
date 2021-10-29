/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:32:43 by chanykim          #+#    #+#             */
/*   Updated: 2021/09/30 14:30:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

#define HIGH_GRADE 1
#define LOW_GRADE 150

class Bureaucrat;
# include "Form.hpp"

class Bureaucrat{
private:
	std::string name;
	int		grade;
public:
	Bureaucrat();
	virtual ~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
	void	gradeIncrease();
	void	gradeDecrease();
	void	signForm(Form &form);

	class GradeTooHighException: public std::exception{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		public:
			const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &src);

#endif