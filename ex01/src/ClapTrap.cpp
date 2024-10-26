/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:23:05 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/25 22:59:47 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(10) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :
	_name(name), _hitPoint(10), _energyPoint(10), _attackDamage(10) {
	std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->_name = a._name;
		this->_hitPoint = a._hitPoint;
		this->_energyPoint = a._energyPoint;
		this->_attackDamage = a._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage
		<< " points of damage!" << std::endl;
		this->_energyPoint--;
	}
	else if (this->_hitPoint == 0)
		std::cout << "Claptrap " << this->_name
		<< " is not able to attack because hitpoint is 0." << std::endl;
	else
		std::cout << "Claptrap " << this->_name
		<< " is not able to attack because energy is 0." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	// first check if claptrap is alive
	if (this->_hitPoint == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	else if (this->_hitPoint < amount)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage." << std::endl;
		std::cout << "ClapTrap " << this->_name << " died from this attack." << std::endl;
		this->_hitPoint = 0;
	}
	else
	{
		this->_hitPoint -= amount;
		std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " hitpoints." << std::endl;
		std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoint << " hitpoints left." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		this->_energyPoint--;
		this->_hitPoint += amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " of hitpoints" << std::endl;
	}
	else if (this->_energyPoint == 0)
		std::cout << "ClapTrap " << this->_name << " is unable to repair itself, it has 0 energy points." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is unable to repair itself, it is already dead." << std::endl;
}
