/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:58:53 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/13 16:12:18 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	std::cout << "\033[44mDefault constructor ScavTrap created\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	this->_name = name;
	std::cout << "\033[44mScavTrap " << this->_name << " created\033[0m with \033[32m" 
		<< this->_energyPts << " energy points \033[0mand \033[34m" << this->_hitPts 
		<< " hit points\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[44mScavTrap destructor called\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mScavTrap " << this->_name << " has not enough energy to attack\033[0m" << std::endl;
		return;
	}
	this->_hitPts -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing \033[1;31m" 
		<< this->_attackDmg << " points of damage!\033[0m" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mScavTrap " << this->_name << " has not enough energy to attack\033[0m" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " is in Gate Keeper mode"  << std::endl;
}
