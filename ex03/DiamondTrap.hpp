/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:43:53 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/20 16:55:18 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp" 
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include <iostream>

class DiamondTrap : virtual public ClapTrap, virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string const &name);
		~DiamondTrap();
 		DiamondTrap &operator=(const DiamondTrap &rhs);

		void	whoAmI(void);
		void	attack(std::string const &target);

		std::string const	&get_name(void);
		void				set_name(std::string const &name);
		
	private:
		std::string	_name;
};

#endif
