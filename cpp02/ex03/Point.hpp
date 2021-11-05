/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/05 09:28:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include "Fixed.hpp"
class Point{
private:
	Fixed	const x;
	Fixed	const y;

public:
	Point();
	~Point();
	Point(Point const &src);
	Point(Fixed const _x, Fixed const _y);

	Fixed	get_x() const;
	Fixed	get_y()	const;

	Point	&operator = (Point const &p);
	bool	operator == (Point const &p) const;
	bool	operator != (Point const &p) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &o, Point const &i);
#endif
