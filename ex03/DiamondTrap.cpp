/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:35:08 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 21:07:55 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*---------------------------------*/
/*  DiamondTrap Class constructor  */
/*---------------------------------*/
DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name" ),
													  FragTrap( name ),
													  ScavTrap( name ),
													  _name( name ) {

	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << PURPLE << "DiamondTrap " << _name << RESET
			  << B_PURPLE << " Created." << RESET << std::endl;
}

/*--------------------------------------*/
/*  DiamondTrap Class copy constructor  */
/*--------------------------------------*/
DiamondTrap::DiamondTrap( const DiamondTrap& other ) :  ClapTrap( other ),
														FragTrap( other ),
														ScavTrap( other ),
														_name( other._name ) {

	std::cout << PURPLE << "DiamondTrap " << _name << RESET
			  << B_PURPLE << " Copied." << RESET << std::endl;
}

/*----------------------------------------------*/
/*  DiamondTrap Class copy assignment operator  */
/*----------------------------------------------*/
DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other ) {

	if ( this != &other ) {
		ClapTrap::operator=( other );
		FragTrap::operator=( other );
		ScavTrap::operator=( other );
		_name = other._name;

		std::cout << PURPLE << "DiamondTrap " << _name << RESET
				  << B_PURPLE << " Assigned." << RESET << std::endl;
	}

	return *this;
}

/*--------------------------------*/
/*  DiamondTrap Class destructor  */
/*--------------------------------*/
DiamondTrap::~DiamondTrap( void ) {
	std::cout << PURPLE << "ScavTrap " << _name << RESET
			  << B_PURPLE << " Destroyed." << RESET << std::endl;
}

/*--------------------------*/
/*  Define whoAmI function  */
/*--------------------------*/
void	DiamondTrap::whoAmI( void ) {
	std::cout << PURPLE << "I am DiamondTrap " << _name
			  << " and my ClapTrap name is " << ClapTrap::_name << RESET << std::endl;
}
