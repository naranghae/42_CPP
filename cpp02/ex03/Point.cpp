/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/05 09:28:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(Fixed	const _x, Fixed const _y) : x(_x), y(_y) {}

Point::Point(Point const &src) : x(src.x), y(src.y) {}

Fixed	Point::get_x() const{
	return (this->x);
}

Fixed	Point::get_y() const{
	return (this->y);
}

std::ostream &operator<<(std::ostream &o, Point const &i)
{
	o << "X: " << i.get_x() << ", Y: " << i.get_y() << std::endl;
	return o;
}