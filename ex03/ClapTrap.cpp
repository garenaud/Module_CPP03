/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:12:21 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/14 15:44:52 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "\033[43mDefault constructor ClapTrap created\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[43mClapTrap destructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	this->_name = name;
	std::cout << "\033[42mClapTrap " << this->_name << " created\033[0m with \033[32m" << this->_energyPts 
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

std::string const	&ClapTrap::get_name(void) const
{
	return (this->_name);
}

int const	&ClapTrap::get_hp(void) const
{
	return (this->_hitPts);
}

int const	&ClapTrap::get_energy_points(void) const
{
	return (this->_energyPts);
}

int const	&ClapTrap::get_damage(void) const
{
	return (this->_attackDmg);
}

void	ClapTrap::set_name(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::set_hp(int const &value)
{
	this->_hitPts = value;
}

void	ClapTrap::set_energy_points(int const &value)
{
	this->_energyPts = value;
}

void	ClapTrap::set_damage(int const &value)
{
	this->_attackDmg = value;
}
