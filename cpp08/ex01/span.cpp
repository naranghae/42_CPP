/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/10/28 13:54:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): n(0) {}

Span::~Span(){}

Span::Span(Span const &copy){
	*this = copy;
}

Span::Span(unsigned int _n): n(_n) {}

void	Span::addNumber(int const add)
{
	if (this->v.size() >= n)
		throw MemoryException();
	v.push_back(add);
}

int	Span::shortestSpan()
{
	if (!this->v.size())
		throw EmptyArrayException();
	else if (this->v.size() == 1)
		throw OneArrayException();
	std::vector<int>	tmp(this->v);
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	unsigned int ret = longestSpan();
	for (it = tmp.begin(); it < tmp.end() - 1; it++)
	{
		if (static_cast<unsigned int>(*(it + 1) - *it) < ret)
			ret = *(it + 1) - *it;
	}
	return ret;
}

int	Span::longestSpan()
{
	if (!this->v.size())
		throw EmptyArrayException();
	else if (this->v.size() == 1)
		throw OneArrayException();
	std::vector<int>	tmp(this->v);
	std::sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}