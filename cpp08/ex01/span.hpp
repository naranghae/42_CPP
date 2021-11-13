/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 11:16:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>

class Span {
private:
	unsigned int	n;
	std::vector<int> v;

public:
	Span();
	~Span();
	Span(Span const &copy);
	Span	&operator=(Span const  &src);
	Span(unsigned int _n);
	void addNumber(int n);
	int	shortestSpan();
	int	longestSpan();
	class EmptyArrayException: public std::exception{
		public:
			virtual const char * what() const throw() {
				return "Empty array";
			}
	};
	class MemoryException: public std::exception{
		public:
			virtual const char * what() const throw() {
				return "out of the set range";
			}
	};
	class OneArrayException: public std::exception{
		public:
			virtual const char * what() const throw() {
				return "One number in array";
			}
	};
};

#endif
