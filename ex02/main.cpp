/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:38:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/30 16:27:36 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*-----------------*/
/*  Main function  */
/*-----------------*/
int	main( void ) {

	ScavTrap	scavTrap( "Serena" );

	scavTrap.attack( "target" );
	scavTrap.takeDamage( 80 );
	scavTrap.beRepaired( 20 );

	scavTrap.guardGate();

	return 0;
}
