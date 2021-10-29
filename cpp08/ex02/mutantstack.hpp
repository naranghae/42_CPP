/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/10/29 10:58:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <iterator>
# include <algorithm>
# include <stack>
# include <vector>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	~MutantStack() {}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {
		return this->c.begin();
	}

	iterator end(){
		return this->c.end();
	}
};
#endif
