/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:11:44 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 20:58:26 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class	Zombie {
private:
	std::string		name;

public:
	Zombie(std::string zombie_name);
	Zombie();
	~Zombie();
	void			Announce(void);
	void			setName(std::string zombie_name);
};

Zombie*				newZombie(std::string name);
void				randomChump(std::string name);
#endif
