/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:23:05 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/25 11:12:18 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(10) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :
	_name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
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
