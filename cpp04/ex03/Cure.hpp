/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 09:31:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "ICharacter.hpp" 

class Cure: public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &src);
	Cure &operator=(Cure const &src);
	AMateria* clone() const;
	void use(ICharacter& target);
};
#endif
