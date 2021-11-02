/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:18:57 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/02 18:35:54 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main()
{
	Karen	karen;
	std::cout << "[KAREN PROGRAM]" << std::endl;
	std::cout << "DEBUG: ";
	karen.complain("DEBUG");
	std::cout << "INFO: ";
	karen.complain("INFO");
	std::cout << "WARNING: ";
	karen.complain("WARNING");
	std::cout << "ERROR: ";
	karen.complain("ERROR");
	return 0;
}
