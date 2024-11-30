/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:38:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/30 15:04:49 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*-----------------*/
/*  Main function  */
/*-----------------*/
int	main( void ) {

	ClapTrap	clapTrap1("One");
	ClapTrap	clapTrap2("Two");

	clapTrap1.attack("target");
	clapTrap2.takeDamage(3);
	clapTrap2.beRepaired(5);
	clapTrap2.attack("target");

	return 0;
}
