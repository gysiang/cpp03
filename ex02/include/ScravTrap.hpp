/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:56:48 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/25 16:21:12 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap: public ClapTrap
{
	private:
		bool _guarding_gate;

	public:
		// constructor
		ScravTrap();
		ScravTrap(const std::string name);
		ScravTrap(const ScravTrap &a);
		// deconstructor
		~ScravTrap();
		// overload operator
		ScravTrap& operator=(const ScravTrap &a);

		// public method
		void	attack(const std::string &target);
		void	guardGate(void);
};

# endif
