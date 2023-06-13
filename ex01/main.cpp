/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:58:27 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/13 16:18:29 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main()
{
	ScavTrap Bob("bob");
	Bob.attack("42");
	Bob.takeDamage(20);
	Bob.beRepaired(3);
	Bob.takeDamage(6);
	Bob.takeDamage(3);
	Bob.takeDamage(5);
	Bob.beRepaired(8);
	Bob.guardGate();
	return (0);
}
