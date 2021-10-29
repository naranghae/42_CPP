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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int		main()
{
	std::cout << "memory Leak" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "array animal" << std::endl;
	int n = 8;
	Animal *animals[n];

	for (int i = 0 ;i < n ;i++){
		std::cout << "[" << i << "] create ::";
		if (i < n / 2){
			std::cout << "Cat ";
			animals[i] = new Cat();
			animals[i]->makeSound();
		}
		else{
			std::cout << "Dog ";
			animals[i] = new Dog();
			animals[i]->makeSound();
		}
	}
	for (int i = 0 ;i < n ;i++)
	{
		std::cout << "[" << i << "] delete ::";
		delete animals[i];
	}
	std::cout << std::endl;
	std::cout << "Cat or Dog copy deep" << std::endl;
	Brain catBrain;
	Brain dogBrain;
	catBrain.setIdeas(0, "hahaha");
	catBrain.setIdeas(1, "im your father!");
	catBrain.printIdeas();
	dogBrain.setIdeas(0, "nonono");
	dogBrain.setIdeas(1, "no god plz no!");
	dogBrain.printIdeas();
	Cat nyang(catBrain);
	Cat nabi(nyang);
	nabi.setIdeas(2, "hey, this is in a dream~~!");
	nabi.printIdeas();
}
