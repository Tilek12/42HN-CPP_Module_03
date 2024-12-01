/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:38:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 21:08:49 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*-----------------*/
/*  Main function  */
/*-----------------*/
int	main( void ) {

	DiamondTrap	diamond( "One" );

	diamond.attack( "target" );
	diamond.takeDamage( 20 );
	diamond.beRepaired( 10 );

	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();

	return 0;
}
