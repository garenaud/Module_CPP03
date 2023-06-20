/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:53:46 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/20 19:03:18 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const int			_defHitPts = 100;
		static const int			_defEnergyPts = 50;
		static const int			_defAttackDmg = 20;
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &rhs);

		int const	&get_hp(void) const;
		int const	&get_energy_points(void) const;
		int const	&get_damage(void) const;

		void	guardGate();
		void	attack(const std::string &target);
};

#endif
