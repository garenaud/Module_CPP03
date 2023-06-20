/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:54:11 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/20 18:56:02 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "default";
	std::cout << this->_energyPts << std::endl;
	this->ClapTrap::_name = _name + "_clap_name";
	this->_hitPts = FragTrap::_defHitPts;
	this->_energyPts = ScavTrap::_defEnergyPts;
	//this->_energyPts = Scav.get_energy_points();
	this->_attackDmg = FragTrap::_defAttackDmg;
	std::cout << "\033[102mDiamondTrap " << this->_name << " created with default constructor.\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ScavTrap(), FragTrap() 
{	
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPts = FragTrap::_defHitPts;
	this->_energyPts = ScavTrap::_defEnergyPts;
	this->_attackDmg = FragTrap::_attackDmg;
	std::cout << "\033[102mDiamondTrap " << this->_name << " created with " 
		<< _hitPts << " Hit Points, " << _energyPts << " Energy Points and "
		<< _attackDmg << " Attack Damage.\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[102mDiamondTrap " << this->_name << " destroyed.\033[0m" << std::endl;
}

/* DiamondTrap::DiamondTrap(DiamondTrap const &copy): ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
} */

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "Assignment operator for DiamondTrap called." << std::endl;
	FragTrap::operator=(copy);
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->_hitPts <= 0)
		std::cout << "Cannot run whoAmI because: DiamondTrap " << this->_name << " is dead." << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->_name << "." << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::_name << "." << std::endl;
	}
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
