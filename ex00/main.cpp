/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:58:27 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/13 16:22:05 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main()
{
	ClapTrap Bob("bob");
	ClapTrap jim;
	Bob.attack("42");
	Bob.takeDamage(6);
	Bob.beRepaired(3);
	Bob.takeDamage(6);
	Bob.takeDamage(3);
	Bob.takeDamage(5);
	Bob.beRepaired(8);
	return (0);
}
