/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/17 14:51:50 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void	swap(T &x, T &y) {
	T temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T min(T const x, T const y) {
	if (x < y)
		return x;
	return y;
}

template <typename T>
T max(T const x, T const y) {
	if (x > y)
		return x;
	return y;
}
#endif
