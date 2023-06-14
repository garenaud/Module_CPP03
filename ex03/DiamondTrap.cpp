/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:54:11 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/13 18:57:34 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	_name = "Default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPts = this->FragTrap::getHit();
	this->_energyPts = this->ScavTrap::getEnergy();
	this->_attackDmg = this->FragTrap::getAttack();
	std::cout << "\033[102mDefault constructor DiamondTrap created\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
/* 	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPts = this->FragTrap::getHit();
	this->_energyPts = this->ScavTrap::getEnergy();
	this->_attackDmg = this->FragTrap::getAttack();
	std::cout << "\033[102mDiamondTrap " << this->_name << " created\033[0m with \033[32m" 
		<< this->_energyPts << " energy points \033[0mand \033[34m" << this->_hitPts 
		<< " hit points\033[0m" << std::endl; */
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[102mDiamondTrap destructor called\033[0m" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
/* 	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "\033[35mDiamondTrap " << this->_name << " has not enough energy to attack\033[0m" << std::endl;
		return;
	}
	this->_hitPts -= 1;
	std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing \033[1;31m" 
		<< this->_attackDmg << " points of damage!\033[0m" << std::endl;
 */}
