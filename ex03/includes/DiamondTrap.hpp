/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:34:00 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 13:18:15 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name);
		DiamondTrap( const DiamondTrap &DiamondTrap);
		~DiamondTrap();

		DiamondTrap	&operator=( const DiamondTrap &DiamondTrap);

		void		whoAmI();
};

#endif
