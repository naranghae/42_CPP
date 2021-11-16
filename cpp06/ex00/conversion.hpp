/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/16 07:37:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <limits>
# include <cstring>
# include <cctype>
# include <iomanip>

void		stringConversion(char *argv);
void		toChar(std::string value);
void		toInt(std::string value);
void		toFloat(std::string value);
void		toDouble(std::string value);
#endif
