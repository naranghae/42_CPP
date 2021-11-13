/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 09:18:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#define SLOTS 4

class Character: public ICharacter
{
	private:
		std::string		name;
		AMateria		*inven[SLOTS];
	public:
		Character();
		~Character();
		Character(std::string const _name);
		Character &operator=(Character const &src);
		Character(Character const &src);

	 	std::string const & getName() const;
	 	void equip(AMateria* m);
	 	void unequip(int idx);
	 	void use(int idx, ICharacter& target);
};

#endif
