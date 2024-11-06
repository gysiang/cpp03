/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:55:17 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 18:39:18 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_guarding_gate = false;
	std::cout << "ScravTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_guarding_gate = false;
	std::cout << "ScravTrap Constructor for " << this->_name << " called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScravTrap Deconstructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap(a) {
	this->_guarding_gate = a._guarding_gate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a) {
	std::cout << "ScravTrap Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->_name = a._name;
		this->_hitPoint = a._hitPoint;
		this->_energyPoint = a._energyPoint;
		this->_attackDamage = a._attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		this->_energyPoint--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " for "
		<< this->_attackDamage << " points of damage!" << std::endl;
	}
	else if (this->_energyPoint == 0)
		std::cout << "ScavTrap " << this->_name << " has no energy to attack." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " has no more hitpoints." << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "ScravTrap " << this->_name << " is already dead." << std::endl;
	}
	else if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScravTrap " << this->_name << " is in Gate Keeper mode." << std::endl;
	}
	else if (this->_guarding_gate == true)
	{
		this->_guarding_gate = false;
		std::cout << "ScravTrap " << this->_name << " is NOT in Gate Keeper mode." << std::endl;
	}
}
