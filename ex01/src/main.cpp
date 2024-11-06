/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:56:25 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 18:39:32 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a;
	ScavTrap b("Ivan");

	// Test the guardgate feature;
	a.attack("Something");
	a.takeDamage(30);
	a.beRepaired(20);
	std::cout << "\033[1;33mTest for Guardgate.\033[0m" << std::endl;
	std::cout << "\033[1;33m--------------------------------\033[0m" << std::endl;
	a.guardGate();
	a.guardGate();
	a.guardGate();
	std::cout << "\033[1;33mTest if ScravTrap can still attack or repair if its dead.\033[0m" << std::endl;
	std::cout << "\033[1;33m--------------------------------\033[0m" << std::endl;
	b.attack("Something more");
	b.takeDamage(50); // b takes damage
	b.takeDamage(100); // b takes damage and dies from this attack
	b.takeDamage(15); // b is dead and should not take damage
	b.beRepaired(20); // b is dead and should not repair
	std::cout << "\033[1;33mClapTrap is destroyed before ScravTrap.\033[0m" << std::endl;
	std::cout << "\033[1;33m--------------------------------\033[0m" << std::endl;
}
