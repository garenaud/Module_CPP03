/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:41 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/20 18:50:04 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
	protected:
		static const int			_defHitPts = 100;
		static const int			_defEnergyPts = 100;
		static const int			_defAttackDmg = 30;
		
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap &operator=(const FragTrap &rhs);

		int const	&get_hp(void) const;
		int const	&get_energy_points(void) const;
		int const	&get_damage(void) const;

		void	highFivesGuys(void);
};

#endif
