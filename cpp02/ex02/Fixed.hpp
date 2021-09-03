/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:11:44 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 20:58:26 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
class Fixed{
private:
	int fp_value;
	static const int bits = 8;

public:
	Fixed();
	Fixed(Fixed const &change);
	Fixed(float const value);
	Fixed(int const value);
	~Fixed();

	Fixed &operator=(Fixed const &change);
	int		getRawBits(void) const;
	void	setRawBits(int const raw); 

	float toFloat(void) const;
	int	toInt(void) const;

	bool operator<(Fixed const &comp) const;
	bool operator<=(Fixed const &comp) const;
	bool operator>(Fixed const &comp) const;
	bool operator>=(Fixed const &comp) const;
	bool operator==(Fixed const &comp) const;
	bool operator!=(Fixed const &comp) const;

	Fixed operator+(Fixed const &value);
	Fixed operator-(Fixed const &value);
	Fixed operator*(Fixed const &value);
	Fixed operator/(Fixed const &value);
	Fixed operator++(int); //postfix
	Fixed operator++(); // prefix
	Fixed operator--(int);
	Fixed operator--();
	
	static Fixed const &min(Fixed const &x, Fixed const &y);
	static Fixed const &max(Fixed const &x, Fixed const &y);
	static Fixed &min(Fixed &x, Fixed &y);
	static Fixed &max(Fixed &x, Fixed &y);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
Fixed const &min(Fixed const &x, Fixed const &y);
Fixed const &max(Fixed const &x, Fixed const &y);
Fixed &min(Fixed &x, Fixed &y);
Fixed &max(Fixed &x, Fixed &y);
#endif
