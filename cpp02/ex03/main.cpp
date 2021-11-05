/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int		main(void)
{
	Point a(0, 0);
	Point b(30, 0);
	Point c(15, 30);

	Point in(15, 10);
	Point out(15, 31);
	std::cout << "create point(a): "<< a;
	std::cout << "create point(b): "<< b;
	std::cout << "create point(c): "<< c;
	std::cout << "create point(in): "<< in;
	std::cout << "create point(out): "<< out;
	if (bsp(a, b, c, in))
		std::cout << "point(in) is in the triangle" << std::endl;
	else
		std::cout << "point(in) is out out triangle" << std::endl;
	if (bsp(a, b, c, out))
		std::cout << "point(out) is in the triangle" << std::endl;
	else
		std::cout << "point(out) is out out triangle" << std::endl;
	return (0);
}
