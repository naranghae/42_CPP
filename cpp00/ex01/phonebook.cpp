/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:25:12 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/01 20:35:17 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

//연락처는 8개까지만 저장가능 9개가 들어오면 어떻게 되는지 헨들링해야함
//동적할당 불가
//SEARCH 때 필요함-> std::setprecision(3)
/*
  double f =3.14159;
  std::cout << std::fixed;
  std::cout << std::setprecision(4) << f << '\n'; //3.1416
  std::cout << std::setprecision(9) << f << '\n'; //3.141590000
*/

//ERROR handling
/* 숫자가 아니면 에러
  long double price;
  std::cout << "Please, enter the price: ";
  std::cin >> std::get_money(price);

  if (std::cin.fail()) std::cout << "Error reading price\n";
  else std::cout << "The price entered is: " << price << '\n';
*/

void	start_view(void)
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━SELECT━━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃                        1. EXIT                         ┃" << std::endl;
	std::cout << "┃                        2. SEARCH                       ┃" << std::endl;
	std::cout << "┃                        3. ADD                          ┃" << std::endl;
	std::cout << "┃           Corresponding numbers can be entered.        ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
	std::cout << "select: ";
}

void	fullbook_view(void)
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━SELECT━━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃                        1. EXIT                         ┃" << std::endl;
	std::cout << "┃                        2. SEARCH                       ┃" << std::endl;
	std::cout << "┃           Corresponding numbers can be entered.        ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
	std::cout << "select: ";
}

int		main(void)
{
	std::string		input;
	int				wrong_typing;
	int				save_phone;
	phonebook		book;

	wrong_typing = 0;
	save_phone = 0;
	while (!std::cin.eof())
	{
		if (!wrong_typing && save_phone != PHONE_MAX)
			start_view();
		else if (!wrong_typing && save_phone == PHONE_MAX)
			fullbook_view();
		std::getline(std::cin, input);
		if (select_type(&book, input, &wrong_typing, save_phone) == 1)
			break ;
	}
	std::cout << "EXIT phonebook." << std::endl;
	return (0);
}

void	var_change(int *wrong_typing, int i)
{
	if (i == 0)
		*wrong_typing = 0;
	else if (i == 1)
		*wrong_typing = 1;
}

int		select_type(phonebook *book, std::string input, int *wrong_typing, int &save_phone)
{
	std::string		search_input;

	if (PHONE_MAX == save_phone && (!input.compare("ADD") || !input.compare("3")))
	{
		var_change(wrong_typing, 0);
		std::cout << "phonebook full" << std::endl;
		return (2);
	}
	if (!input.compare("EXIT") || !input.compare("1"))
		return (1);
	else if (!input.compare("SEARCH") || !input.compare("2"))
	{
		std::cout << "search: ";
		std::getline(std::cin, search_input);
		book->printt(search_input);
		std::cout << input << std::endl;
	}
	else if (!input.compare("ADD") || !input.compare("3"))
	{
		book->add_phonebook(save_phone);
		std::cout << "save_phone" << save_phone << std::endl;
		save_phone++;
	}
	else if (std::cin.eof())
		std::cout << "CTRL signal exit." << std::endl;
	else
	{
		var_change(wrong_typing, 1);
		std::cout << "Please input again." << std::endl;
		std::cout << "select: ";
		return (0);
	}
	var_change(wrong_typing, 0);
	return (0);
}

void	phonebook::printt(std::string search_input)
{
	int save_phone;

	save_phone = std::strtol(search_input.c_str(), NULL, 10);
	std::cout << first_name[save_phone] << std::endl;
	std::cout << last_name[save_phone] << std::endl;
	std::cout << nickname[save_phone] << std::endl;
	std::cout << login[save_phone] << std::endl;
	std::cout << postal_address[save_phone] << std::endl;
	std::cout << email_address[save_phone] << std::endl;
	std::cout << phone_number[save_phone] << std::endl;
	std::cout << birthday_date[save_phone] << std::endl;
	std::cout << favorite_meal[save_phone] << std::endl;
	std::cout << underwear_color[save_phone] << std::endl;
	std::cout << darkest_secret[save_phone] << std::endl;
}

void	phonebook::add_phonebook(int save_phone)
{
	std::string		add_input;

	std::cout << "first_name: ";
	std::getline(std::cin, add_input);
	first_name[save_phone] = add_input;
	std::cout << "last_name: ";
	std::getline(std::cin, add_input);
	last_name[save_phone] = add_input;
	std::cout << "nickname: ";
	std::getline(std::cin, add_input);
	nickname[save_phone] = add_input;
	std::cout << "login: ";
	std::getline(std::cin, add_input);
	login[save_phone] = add_input;
	std::cout << "postal_address: ";
	std::getline(std::cin, add_input);
	postal_address[save_phone] = add_input;
	std::cout << "email_address: ";
	std::getline(std::cin, add_input);
	email_address[save_phone] = add_input;
	std::cout << "phone_number: ";
	std::getline(std::cin, add_input);
	phone_number[save_phone] = add_input;
	std::cout << "birthday_date: ";
	std::getline(std::cin, add_input);
	birthday_date[save_phone] = add_input;
	std::cout << "favorite_meal: ";
	std::getline(std::cin, add_input);
	favorite_meal[save_phone] = add_input;
	std::cout << "underwear_color: ";
	std::getline(std::cin, add_input);
	underwear_color[save_phone] = add_input;
	std::cout << "darkest_secret: ";
	std::getline(std::cin, add_input);
	darkest_secret[save_phone] = add_input;
}
