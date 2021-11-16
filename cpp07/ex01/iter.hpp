/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/16 10:49:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <cstring>

template <typename T>
void	execute(T &var){
		std::cout << var;
}

template <typename T>
void	iter(T *addr, int len, void (*func)(T &var)) {
	for(int i = 0 ;i < len; i++){
		(*func)(addr[i]);
		if (i + 1 == len)
			std::cout << std::endl;
		else
			std::cout << ", ";
	}
}

#endif
