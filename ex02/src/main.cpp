/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:54:12 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/05 00:29:22 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::cout << "Constructor :" << std::endl;

	FragTrap	a("test");

	std::cout << std::endl;
	std::cout << "Display Name :" << std::endl;
	a.attack("blabla");

	std::cout << std::endl;
	std::cout << "Attack :" << std::endl;
	a.attack("undefined");

	std::cout << std::endl;
	std::cout << "Take damage :" << std::endl;
	a.takeDamage(5);

	std::cout << std::endl;
	std::cout << "Be repaired :" << std::endl;
	a.beRepaired(10);

	std::cout << std::endl;
	std::cout << "High Five :" << std::endl;
	a.highFivesGuys();

	std::cout << std::endl;
	std::cout << "Destructor :" << std::endl;
	return (0);
}
