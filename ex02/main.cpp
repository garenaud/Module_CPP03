/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:58:27 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/13 17:44:24 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main()
{
	ScavTrap Bob("bob");
	FragTrap Bill("Bill");
	FragTrap j;
	ScavTrap i;
	Bob.attack("42");
	Bill.attack("Poutine");
	j = Bill;
	i = Bob;
	Bob.takeDamage(20);
	Bob.beRepaired(3);
	Bob.takeDamage(6);
	Bob.takeDamage(3);
	Bob.takeDamage(5);
	Bob.beRepaired(8);
	Bob.guardGate();
	Bill.highFivesGuys();
	return (0);
}
