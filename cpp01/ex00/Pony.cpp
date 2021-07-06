/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:11:39 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 13:23:57 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string str)
{
	name = str;
	std::cout << "이 포니의 이름은" << name << " 입니다." << std::endl;
}

Pony::~Pony()
{
}

void	Pony::sleep_pony()
{
	std::cout << name << " Pony가 잠을 잡니다..zzZ" << std::endl;
}

void	Pony::awake_pony()
{
	std::cout << name << " Pony가 잠에서 깼습니다!!" << std::endl;
}
