/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:11:44 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 20:58:26 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class DiamondTrap : public FragTrap, public ScavTrap{
public:
		DiamondTrap(std::string name);
		~DiamondTrap();

		void whoAmI();
		void attack(const std::string &target);
private:
		std::string Name;
};

#endif
