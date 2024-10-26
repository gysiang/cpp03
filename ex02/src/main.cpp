/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:20:04 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/26 12:24:29 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	a;
	FragTrap	b("Ivan");

	a.highFivesGuys();
	a.attack("some guy");
	a.takeDamage(150); // dies from this attack
	a.takeDamage(1); // should not take more hits as its dead
	b.highFivesGuys();
	return (0);
}
