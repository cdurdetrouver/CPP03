/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:54:03 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 17:46:47 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("undefined"), hp(10), ep(10), dmg(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), dmg(0)
{
	std::cout << "Constructor ClapTrap called for " << this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap) : name(clap.name), hp(clap.hp), ep(clap.ep), dmg(clap.dmg)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap)
{
	if (this != &clap)
	{
		std::cout << "ClapTrap assignement operator called" << std::endl;
		this->name = clap.name;
		this->hp = clap.hp;
		this->ep = clap.ep;
		this->dmg = clap.dmg;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hp == 0)
		std::cout << "ClapTrap " << this->name <<  " is dead !!!" << std::endl;
	else if (this->ep >= 1)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ClapTrap not enough energy point for attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
		std::cout << "ClapTrap " << this->name <<  " is already dead !!!" << std::endl;
	else if (this->hp > amount)
	{
		std::cout << "ClapTrap " << this->name << " take " << amount << " damage on " << this->hp << " hit points" << ", he's got now " << this->hp - amount << " hit points!" << std::endl;
		this->hp -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " take " << amount << " damage on " << this->hp << " hit points" << ", he's completly dead!" << std::endl;
		this->hp = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp == 0)
		std::cout << "ClapTrap " << this->name <<  " is dead !!!" << std::endl;
	else if (this->ep >= 1)
	{
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " repaired himself, and get back " << amount << " hit points, he's got now " << this->hp << " hit points!" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ClapTrap not enough energy point for taking care of himself" << std::endl;
}
