/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 09:38:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp" 

class MateriaSource : public IMateriaSource
{
private:
	AMateria *src[4];
	int max;

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &src);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	MateriaSource &operator=(MateriaSource const &src);
};

#endif