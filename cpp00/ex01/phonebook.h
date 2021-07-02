/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:48:27 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/01 20:35:13 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#define PHONE_MAX	8
#define EXIT		1
#define SEARCH		2
#define ADD			3

class	phonebook {
private:
	std::string		first_name[PHONE_MAX];
	std::string		last_name[PHONE_MAX];
	std::string		nickname[PHONE_MAX];
	std::string		login[PHONE_MAX];
	std::string		postal_address[PHONE_MAX];
	std::string		email_address[PHONE_MAX];
	std::string		phone_number[PHONE_MAX];
	std::string		birthday_date[PHONE_MAX];
	std::string		favorite_meal[PHONE_MAX];
	std::string		underwear_color[PHONE_MAX];
	std::string		darkest_secret[PHONE_MAX];

public:
	void			add_phonebook(int save_phone);
	void			all_print(std::string save_phone);
	void			search_print(std::string search_input, int save_phone);
	void			write_info(int index);
};

void				start_view(int save_phone);
void				fullbook_view(void);
int					select_type(phonebook *book, std::string input, int &wrong_typing, int &save_phone);
void				var_change(int *wrong_typing, int i);
int					search_check(int index, int save_phone);
void				contacts_info(int save_phone);
void				search_item(void);
#endif
