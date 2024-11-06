/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:19:48 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 18:42:06 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor for " << this->_name << " called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Deconstructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &a) {
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = a._name;
	this->_hitPoint = a._hitPoint;
	this->_energyPoint = a._energyPoint;
	this->_attackDamage = a._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	if (this->_hitPoint > 0)
		std::cout << "\033[0;31mFragTrap " << this->_name << ": Gives you a high five!\033[0m " << std::endl;
	else
		std::cout << "\033[0;31mFragTrap " << this->_name << " is already dead!\033[0m " << std::endl;
}
