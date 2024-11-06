/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:56:48 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 18:37:13 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool _guarding_gate;

	public:
		// constructor
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &a);
		// deconstructor
		~ScavTrap();
		// overload operator
		ScavTrap& operator=(const ScavTrap &a);

		// public method
		void	attack(const std::string &target);
		void	guardGate(void);
};

# endif
