/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/10/15 10:02:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void	toChar(double value)
{
	std::cout << "char: ";

	if (value >= 32 && value <= 126)
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	else if (value < 0 || value > 127 || std::isnan(value) == 0)
		std::cout << "Non displayable" << std::endl;
	else if (std::isnan(value))
		std::cout << "impossible" << std::endl;
}

void	toInt(double value)
{
	std::cout << "int: ";

	if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(value) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	toFloat(double value)
{
	std::cout << "float: ";
	if (!std::isinf(value))
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
	else if (std::isinf(value) || std::isnan(value))
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void	toDouble(double value)
{
	std::cout << "double: ";

	if (!std::isinf(value))
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(value)<< std::endl;
	else if (std::isinf(value) || std::isnan(value))
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;

}

void	stringConversion(char *argv)
{
	double value;
	char *pEnd;
	value = std::strtod(argv, &pEnd);
	toChar(value);
	toInt(value);
	toFloat(value);
	toDouble(value);
}