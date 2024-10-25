/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:23:20 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/25 13:36:43 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a;
	ClapTrap b("Sam");
	int i;

	i = 5;
	a.attack(" an enemy");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(3);
	a.attack(" other enemy");
	b.beRepaired(2);
	while (i > 0)
	{
		b.attack("something");
		i--;
	}
}
