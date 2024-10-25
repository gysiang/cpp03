/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:23:09 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/25 10:53:32 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hitPoint;
		int _energyPoint;
		int _attackDamage;

	public:
		// constructor
		ClapTrap();
		ClapTrap(const std::string name);
		// deconstructor
		~ClapTrap();
		// copy constructor
		ClapTrap(const ClapTrap &copy);
		// overload constructor
		ClapTrap &operator=(const ClapTrap &a);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beReparied(unsigned int amount);
};

#endif
