/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:51:21 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/05 00:28:10 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->name = "undefined";
	this->hp = 100;
	this->ep = 50;
	this->dmg = 20;
}

ScavTrap::ScavTrap( std::string name)
{
	this->name = name;
	std::cout << "ScavTrap constructor called for " << this->name << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->dmg = 20;
}

ScavTrap::ScavTrap( const ScavTrap &scavtrap) : ClapTrap(name)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	this->hp = scavtrap.hp;
	this->ep = scavtrap.ep;
	this->dmg = scavtrap.dmg;
}


ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called for " << this->name << std::endl;
}

void	ScavTrap::operator=(const ScavTrap& scavtrap)
{
	if (this != &scavtrap)
	{
		std::cout << "Scavtrap assignement operator called" << std::endl;
		this->name = scavtrap.name;
		this->hp = scavtrap.hp;
		this->ep = scavtrap.ep;
		this->dmg = scavtrap.dmg;
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->ep >= 1)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ScavTrap not enough energy point for attack" << std::endl;
}