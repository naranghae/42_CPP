/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:18:57 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/02 19:20:35 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2) {
		std::cout << "argument error." << std::endl;
		return 0;
	}
	std::string level = argv[1];
	karen.complain(level);
	return 0;
}
