/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/18 10:49:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <iterator>
# include <algorithm>
# include <vector>
# include <list>

template<typename T>
int	 easyfind(T &container, int i)
{
	typename T::iterator it = std::find(container.begin(), container.end(), i);

	if (it == container.end())
		throw std::exception();
	return *it;
}

#endif
