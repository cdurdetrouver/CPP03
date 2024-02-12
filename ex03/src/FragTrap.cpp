/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:20:57 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/12 13:15:23 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("undefined")
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->dmg = 30;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called for " << this->name << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->dmg = 30;
}

FragTrap::FragTrap( const FragTrap &FragTrap) : ClapTrap(FragTrap.name)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	this->hp = FragTrap.hp;
	this->ep = FragTrap.ep;
	this->dmg = FragTrap.dmg;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called for " << this->name << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap& FragTrap)
{
	if (this != &FragTrap)
	{
		std::cout << "FragTrap assignement operator called" << std::endl;
		this->name = FragTrap.name;
		this->hp = FragTrap.hp;
		this->ep = FragTrap.ep;
		this->dmg = FragTrap.dmg;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hp == 0)
		std::cout << "FragTrap " << this->name <<  " is dead !!!" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " request a highfive!" << std::endl;
}
