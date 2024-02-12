/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:33:23 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/12 13:15:43 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(),  FragTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->name = "undefined";
	this->ClapTrap::name = this->name + "_clap_name";
	this->hp = 100;
	this->ep = 50;
	this->dmg = 30;
}

DiamondTrap::DiamondTrap( std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	std::cout << "DiamondTrap constructor called for " << this->name << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->dmg = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap &diamondTrap): ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->name = diamondTrap.name;
	this->ClapTrap::name = this->name + "_clap_name";
	this->hp = diamondTrap.hp;
	this->ep = diamondTrap.ep;
	this->dmg = diamondTrap.dmg;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called for " << this->name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	if (this != &diamondTrap)
	{
		std::cout << "DiamondTrap assignement operator called" << std::endl;
		this->name = diamondTrap.name;
		this->ClapTrap::name = diamondTrap.ClapTrap::name;
		this->hp = diamondTrap.hp;
		this->ep = diamondTrap.ep;
		this->dmg = diamondTrap.dmg;
	}
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	if (this->hp == 0)
		std::cout << "DiamondTrap " << this->name <<  " is dead !!!" << std::endl;
	else
		std::cout << "I am " << this->name <<", and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}
