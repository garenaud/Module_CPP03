/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:12:21 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/13 16:20:00 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "\033[44mDefault constructor ClapTrap created\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[44mClapTrap destructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	this->_name = name;
	std::cout << "\033[44mClapTrap " << this->_name << " created\033[0m with \033[32m" << this->_energyPts 
		<< " energy points \033[0mand \033[34m" << this->_hitPts << " hit points\033[0m" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPts = rhs._hitPts;
		_energyPts = rhs._energyPts;
		_attackDmg = rhs._attackDmg;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mClapTrap " << this->_name << " has not enough energy to attack\033[0m" << std::endl;
		return;
	}
	this->_hitPts -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing \033[1;31m" 
		<< this->_attackDmg << " points of damage!\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mClapTrap " << this->_name << " has not enough energy to take damage\033[0m" << std::endl;
		return;
	}
	this->_energyPts -= amount;
	std::cout << "ClapTrap " << this->_name << " take \033[1;31m" << amount 
		<< " damage\033[0m, he has now \033[32m" << this->_energyPts 
		<< " energy points\033[0m and \033[34m" << this->_hitPts 
		<< " hit points\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mClapTrap " << this->_name << " has not enough energy to be repaired\033[0m" << std::endl;
		return;
	}
	this->_energyPts += amount;
	this->_hitPts -= 1;
	std::cout << "ClapTrap " << this->_name << " repaired himself \033[32m" << amount 
		<< " energy points\033[0m, he has now \033[32m" << this->_energyPts 
		<< " energy points\033[0m and \033[34m" << this->_hitPts 
		<< " hit points\033[0m" << std::endl;
}
