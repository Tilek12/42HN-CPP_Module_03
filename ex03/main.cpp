/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:38:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 16:11:49 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*-----------------*/
/*  Main function  */
/*-----------------*/
int	main( void ) {

	FragTrap	fragTrap( "frag" );

	fragTrap.attack( "target" );
	fragTrap.takeDamage( 50 );
	fragTrap.beRepaired( 20 );

	fragTrap.highFivesGuys();

	return 0;
}
