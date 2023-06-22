/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:58:27 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/20 20:47:23 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main()
{
	ScavTrap Bob("bob");
	ScavTrap Jim;
	Bob.attack("42");
	Bob.takeDamage(20);
	Jim.takeDamage(3);
	Jim = Bob;
	Bob.beRepaired(3);
	Bob.takeDamage(6);
	Bob.takeDamage(3);
	Bob.takeDamage(5);
	Bob.beRepaired(8);
	Jim.takeDamage(1);
	Bob.guardGate();
	return (0);
}
