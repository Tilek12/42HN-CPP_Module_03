/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:35:53 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 16:07:59 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*------------------------------*/
/*  ScavTrap Class constructor  */
/*------------------------------*/
ScavTrap::ScavTrap ( const std::string& name ) : ClapTrap( name ) {

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << GREEN << "ScavTrap " << _name << RESET
			  << B_GREEN << " Created." << RESET << std::endl;
}

/*-----------------------------------*/
/*  ScavTrap Class copy constructor  */
/*-----------------------------------*/
ScavTrap::ScavTrap ( const ScavTrap& other ) : ClapTrap ( other ) {
	std::cout << GREEN << "ScavTrap " << _name << RESET
			  << B_GREEN << " Copied." << RESET << std::endl;
}

/*-------------------------------------------*/
/*  ScavTrap Class copy assignment operator  */
/*-------------------------------------------*/
ScavTrap&	ScavTrap::operator=( const ScavTrap& other ) {

	if ( this != &other ) {
		ClapTrap::operator=( other );
	}

	std::cout << GREEN << "ScavTrap " << _name << RESET
			  << B_GREEN << " Assigned." << RESET << std::endl;
	return *this;
}

/*-----------------------------*/
/*  ScavTrap Class destructor  */
/*-----------------------------*/
ScavTrap::~ScavTrap( void ) {
	std::cout << GREEN << "ScavTrap " << _name << RESET
			  << B_GREEN << " Destroyed." << RESET << std::endl;
}

/*----------------------------*/
/*  Override attack function  */
/*----------------------------*/
void	ScavTrap::attack( const std::string& target ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << RED << "ScavTrap " << _name
				  << " can't Attack. Not enough Hit Points or Energy Points." << std::endl;
	}

	_energyPoints--;
	std::cout << GREEN << "ScavTrap " << _name << RESET
			  << B_GREEN << " Attacks " << target << RESET
			  << GREEN << " with " << RESET
			  << CYAN << _attackDamage << RESET
			  << GREEN << " points of Damage." << RESET << std::endl;
}

/*-----------------------------*/
/*  Define guardGate function  */
/*-----------------------------*/
void	ScavTrap::guardGate ( void ) {
	std::cout << GREEN << "ScavTrap " << _name << " is now in " << RESET
			  << B_GREEN << "Gate keeper mode." << RESET
			  << std::endl;
}
