/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:11:33 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 13:24:11 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony stack_pony("stack");
	stack_pony.sleep_pony();
	stack_pony.awake_pony();
}

void	ponyOnTheHeap()
{
	Pony *heap_p = new Pony("heap");
	heap_p->sleep_pony();
	heap_p->awake_pony();
	delete heap_p;
}

int		main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}
