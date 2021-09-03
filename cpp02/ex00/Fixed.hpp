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

class Fixed{
private:
	int fp_value;
	static const int bits = 8;

public:
	Fixed();
	Fixed(Fixed const &change);
	~Fixed();

	Fixed &operator=(Fixed const &change);
	int		getRawBits(void) const;
	void	setRawBits(int const raw); 
};


#endif
