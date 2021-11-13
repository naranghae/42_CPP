/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 09:14:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp" 
class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	std::string const & getType() const; 
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	AMateria();
	virtual ~AMateria();
	AMateria &operator=(AMateria const &src);
	AMateria(AMateria const &src);
};
#endif
