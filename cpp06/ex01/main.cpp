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

#include "Serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	return	reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int		main(void)
{
	Data	ptr;
	ptr.str = "serialization";
	ptr.value = 1234;

	uintptr_t raw = serialize(&ptr);
	Data *deserial = deserialize(raw);
	std::cout << "---------serialize data------------" <<std::endl;
	std::cout << "str: " << ptr.str << std::endl;
	std::cout << "value: " << ptr.value << std::endl;
	std::cout << "ptr: " << &ptr << std::endl;
	std::cout << std::endl;
	std::cout << "---------deserialize data----------" <<std::endl;
	std::cout << "str: " << deserial->str << std::endl;
	std::cout << "value: " << deserial->value << std::endl;
	std::cout << "ptr: " << deserial << std::endl;
	return 0;
}
