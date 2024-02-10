/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:54:12 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 17:12:19 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "Constructor :" << std::endl;

	ClapTrap	a("test");
	ClapTrap	b;
	ClapTrap	c(a);
	ClapTrap	d;
	d = a;

	std::cout << std::endl;
	std::cout << "Display Name :" << std::endl;
	a.attack("blabla");
	b.attack("blabla");
	c.attack("blabla");
	d.attack("blabla");

	std::cout << std::endl;
	std::cout << "Attack :" << std::endl;
	a.attack("undefined");
	b.attack("test");

	std::cout << std::endl;
	std::cout << "Take damage :" << std::endl;
	b.takeDamage(5);
	b.takeDamage(30);
	b.takeDamage(10);
	a.takeDamage(5);

	std::cout << std::endl;
	std::cout << "Be repaired :" << std::endl;
	a.beRepaired(10);
	b.beRepaired(10);

	std::cout << std::endl;
	std::cout << "Attack until no energy point :" << std::endl;
	for (int i = 0; i < 7; i ++)
	{
		a.attack("undefined");
	}
	a.attack("undefined");
	a.beRepaired(1000);

	std::cout << std::endl;
	std::cout << "Destructor :" << std::endl;
	return (0);
}
