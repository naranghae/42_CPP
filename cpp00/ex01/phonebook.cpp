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

void	start_view(int save_phone)
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━SELECT━━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃                        1. EXIT                         ┃" << std::endl;
	std::cout << "┃                        2. SEARCH                       ┃" << std::endl;
	std::cout << "┃                        3. ADD (" << save_phone << " / " << "8) " << "                 ┃" << std::endl;
	std::cout << "┃           Corresponding numbers can be entered.        ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
}

void	contacts_info(phonebook *book, int save_phone)
{
	int		i;

	i = -1;
	if (save_phone > 0)
	{
		std::cout << std::endl;
		search_item();
		while (++i < save_phone)
			book->write_info(i + 1);
		std::cout << std::endl;
	}
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
		if (!wrong_typing)
		{
			start_view(save_phone);
			contacts_info(&book, save_phone);
		}
		std::cout << "select: ";
		std::getline(std::cin, input);

		if (select_type(&book, input, wrong_typing, save_phone) == 1)
			break ;
	}
	std::cout << "EXIT phonebook." << std::endl;
	return (0);
}

void	var_change(int &wrong_typing, int i)
{
	if (i == 0)
		wrong_typing = 0;
	else if (i == 1)
		wrong_typing = 1;
}

int		select_type(phonebook *book, std::string input, int &wrong_typing, int &save_phone)
{
	std::string		search_input;

	if (PHONE_MAX == save_phone && (!input.compare("ADD") || !input.compare("3")))
	{
		var_change(wrong_typing, 0);
		std::cout << "phonebook full" << std::endl;
		return (2);
	}
	if ((save_phone == 0) && (!input.compare("SEARCH") || !input.compare("2")))
	{
		var_change(wrong_typing, 0);
		std::cout << "There are no saved phonebook." << std::endl;
		return (2);
	}
	if (!input.compare("EXIT") || !input.compare("1"))
		return (1);
	else if (!input.compare("SEARCH") || !input.compare("2"))
	{
		std::cout << "search: ";
		std::getline(std::cin, search_input);
		book->search_print(search_input, save_phone);
		//book->all_print(search_input);
	}
	else if (!input.compare("ADD") || !input.compare("3"))
	{
		book->add_phonebook(save_phone);
		save_phone++;
	}
	else if (std::cin.eof())
		std::cout << "CTRL signal exit." << std::endl;
	else
	{
		var_change(wrong_typing, 1);
		std::cout << "Please input again." << std::endl;
		return (0);
	}
	var_change(wrong_typing, 0);
	return (0);
}

int		search_check(int index, int save_phone)
{
	if (!(index >= 1 && index <= 8))
	{
		std::cout << "This is not a valid index." << std::endl;
		return (1);
	}
	if (index >= save_phone + 1)
	{
		std::cout << "There are no phonebook." << std::endl;
		return (1);
	}
	return (0);
}

void	search_item(void)
{
	std::cout << std::setw(6);
	std::cout << " index" << " |";
	std::cout << std::setw(10);
	std::cout << "first_name" << "|";
	std::cout << std::setw(10);
	std::cout << "last_name" << "|";
	std::cout << std::setw(10);
	std::cout << "nickname" << "|" << std::endl;
	std::cout << "────────────────────────────────────────" << std::endl;

}

void	phonebook::write_info(int index)
{
	int			i;
	const char	*str;

	i = -1;
	std::cout << std::setw(6);
	std::cout << index << " |";
	if (strlen(first_name[index - 1].c_str()) > 10)
	{
		str = first_name[index - 1].c_str();
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".|";
		str = NULL;
		i = -1;
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << first_name[index - 1] << "|";
	}
	if (strlen(last_name[index - 1].c_str()) > 10)
	{
		str = last_name[index - 1].c_str();
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".|";
		str = NULL;
		i = -1;
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << last_name[index - 1] << "|";
	}
	if (strlen(nickname[index - 1].c_str()) > 10)
	{
		str = nickname[index - 1].c_str();
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".|" << std::endl;;
		str = NULL;
		i = -1;
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << nickname[index - 1] << "|" << std::endl;
	}
}

void	phonebook::search_print(std::string search_input, int save_phone)
{
	int			index;

	index = std::strtol(search_input.c_str(), NULL, 10);
	if (search_check(index, save_phone))
		return ;
	std::cout << std::endl;
	std::cout << "            <SEARCH PHONEBOOK >" << std::endl;
	search_item();
	write_info(index);
	std::cout << std::endl;
}

void	phonebook::all_print(std::string search_input)
{
	int save_phone;

	save_phone = std::strtol(search_input.c_str(), NULL, 10);
	std::cout << "first_name: " << first_name[save_phone] << std::endl;
	std::cout << "last_name: " << last_name[save_phone] << std::endl;
	std::cout << "nickname: " << nickname[save_phone] << std::endl;
	std::cout << "login: " << login[save_phone] << std::endl;
	std::cout << "postal_address: " << postal_address[save_phone] << std::endl;
	std::cout << "email_address: " << email_address[save_phone] << std::endl;
	std::cout << "phone_number: " << phone_number[save_phone] << std::endl;
	std::cout << "birthday_date: " << birthday_date[save_phone] << std::endl;
	std::cout << "favorite_meal: " << favorite_meal[save_phone] << std::endl;
	std::cout << "underwear_color: " << underwear_color[save_phone] << std::endl;
	std::cout << "darkest_secret: " << darkest_secret[save_phone] << std::endl;
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
