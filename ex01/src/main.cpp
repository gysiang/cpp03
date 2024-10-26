/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:56:25 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/25 21:37:39 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int	main()
{
	ScravTrap a;
	ScravTrap b("Ivan");

	// Test the guardgate feature;
	a.attack("Something");
	a.takeDamage(30);
	a.beRepaired(20);
	a.guardGate();
	// Test if b takes more damage than necessary
	a.guardGate();
	b.attack("Something more");
	b.takeDamage(50); // b takes damae
	b.takeDamage(100); // b takes damage and dies from this attack
	b.takeDamage(15); // b is dead and should not take damage
	b.beRepaired(20); // b is dead and should not repair
}
