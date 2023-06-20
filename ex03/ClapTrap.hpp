/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:01:19 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/20 18:46:50 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
	protected:
		std::string			_name;
		int					_hitPts;
		int					_energyPts;
		int					_attackDmg;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &rhs);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string const	&get_name(void) const;
		int const			&get_hp(void) const;
		int const			&get_energy_points(void) const;
		int const			&get_damage(void) const;
		void				set_name(std::string const &name);
		void				set_hp(int const &value);
		void				set_energy_points(int const &value);
		void				set_damage(int const &value);
};

#endif
