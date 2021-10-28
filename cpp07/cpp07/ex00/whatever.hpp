/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/10/21 11:14:22 by user42           ###   ########.fr       */
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
T min(T x, T y) {
	if (x < y)
		return x;
	return y;
}

template <typename T>
T max(T x, T y) {
	if (x > y)
		return x;
	return y;
}
#endif
