/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:20:57 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/05 00:28:57 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->name = "undefined";
	this->hp = 100;
	this->ep = 50;
	this->dmg = 20;
}

FragTrap::FragTrap( std::string name)
{
	this->name = name;
	std::cout << "FragTrap constructor called for " << this->name << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->dmg = 20;
}

FragTrap::FragTrap( const FragTrap &FragTrap) : ClapTrap(name)
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

void	FragTrap::operator=(const FragTrap& FragTrap)
{
	if (this != &FragTrap)
	{
		std::cout << "FragTrap assignement operator called" << std::endl;
		this->name = FragTrap.name;
		this->hp = FragTrap.hp;
		this->ep = FragTrap.ep;
		this->dmg = FragTrap.dmg;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " request a highfive!" << std::endl;
}
