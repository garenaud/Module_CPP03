/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:58:27 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/20 19:07:26 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int	main(void)
{
	DiamondTrap Alice("Alice");
	Alice.attack("42");
	Alice.takeDamage(30);
	Alice.beRepaired(20);
	Alice.highFivesGuys();
	Alice.guardGate();
	Alice.whoAmI();
}
