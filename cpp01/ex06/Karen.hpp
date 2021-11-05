/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:03 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/02 17:56:39 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <algorithm>

class Karen{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Karen();
	~Karen();
	void complain( std::string level );
};
#endif
