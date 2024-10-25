/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:55:17 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/25 16:30:44 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap() : ClapTrap() {
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_guarding_gate = false;
	std::cout << "ScravTrap Default Constructor called" << std::endl;
}

ScravTrap::ScravTrap(const std::string name) : ClapTrap(name) {
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_guarding_gate = false;
	std::cout << "ScravTrap Constructor for" << this->_name << " called" << std::endl;
}

ScravTrap::~ScravTrap() {
	std::cout << "ScravTrap Deconstructor called" << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap &a) : ClapTrap(a) {
	this->_guarding_gate = a._guarding_gate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScravTrap &ScravTrap::operator=(const ScravTrap &a) {
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

void ScravTrap::attack(const std::string &target)
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
		std::cout << "ScavTrap " << this->_name << " is already dead. It cannot attack." << std::endl;
}

void ScravTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScravTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScravTrap " << this->_name << " is already guarding the gate!" << std::endl;
}
