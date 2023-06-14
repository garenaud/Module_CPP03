/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:30 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/13 17:46:15 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "\033[106mDefault constructor FragTrap created\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	this->_name = name;
	std::cout << "\033[106mFragTrap " << this->_name << " created\033[0m with \033[32m" 
		<< this->_energyPts << " energy points \033[0mand \033[34m" << this->_hitPts 
		<< " hit points\033[0m" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "\033[106mFragTrap copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPts = rhs._hitPts;
		_energyPts = rhs._energyPts;
		_attackDmg = rhs._attackDmg;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[106mFragTrap destructor called\033[0m" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mFragTrap " << this->_name << " has not enough energy to attack\033[0m" << std::endl;
		return;
	}
	this->_hitPts -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing \033[1;31m" 
		<< this->_attackDmg << " points of damage!\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mFragTrap " << this->_name << " has not enough energy to attack\033[0m" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << ": High fives guys!"  << std::endl;
}

int		FragTrap::getHit()
{
	return(100);
}

int		FragTrap::getEnergy()
{
	return(100);
}

int		FragTrap::getAttack()
{
	return(30);
}
