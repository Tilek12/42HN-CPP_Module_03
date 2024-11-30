/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:14:19 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/30 18:07:56 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*------------------------------*/
/*  ClapTrap Class constructor  */
/*------------------------------*/
ClapTrap::ClapTrap( std::string name ) : _name( name ),
										 _hitPoints( 10 ),
										 _energyPoints( 10 ),
										 _attackDamage( 0 ) {

	std::cout << YELLOW << "ClapTrap " << _name << RESET
			  << B_YELLOW << " Created." << RESET << std::endl;
}

/*-----------------------------------*/
/*  ClapTrap Class copy constructor  */
/*-----------------------------------*/
ClapTrap::ClapTrap( const ClapTrap& other ) : _name( other._name ),
											  _hitPoints( other._hitPoints ),
											  _energyPoints( other._energyPoints ),
											  _attackDamage( other._attackDamage ) {

	std::cout << YELLOW << "ClapTrap " << _name << RESET
			  << B_YELLOW << " Copy Created." << RESET << std::endl;
}

/*-------------------------------------------*/
/*  ClapTrap Class copy assignment operator  */
/*-------------------------------------------*/
ClapTrap&	ClapTrap::operator=( const ClapTrap& other ) {

	if ( this != &other ) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}

	std::cout << YELLOW << "ClapTrap " << _name << RESET
			  << B_YELLOW << " Assigned." << RESET << std::endl;

	return *this;
}

/*-----------------------------*/
/*  ClapTrap Class destructor  */
/*-----------------------------*/
ClapTrap::~ClapTrap( void ) {

	std::cout << YELLOW << "ClapTrap " << _name << RESET
			  << B_YELLOW << " Destroyed." << RESET << std::endl;
}

/*--------------------------*/
/*  Define attack function  */
/*--------------------------*/
void	ClapTrap::attack( const std::string& target ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << RED << "ClapTrap " << _name
				  << " can't Attack. Not enough Hit Points or Energy Points." << RESET
				  << std::endl;
		return;
	}

	_energyPoints--;

	std::cout << YELLOW << "ClapTrap " << _name << RESET
			  << B_YELLOW << " Attacks " << target << RESET
			  << YELLOW << " with " << RESET
			  << CYAN << _attackDamage << RESET
			  << YELLOW << " points of Damage." << RESET << std::endl;
}

/*------------------------------*/
/*  Define takeDamage function  */
/*------------------------------*/
void	ClapTrap::takeDamage( unsigned int amount ) {

	if ( _hitPoints == 0 ) {
		std::cout << RED << "ClapTrap " << _name << " is already Down." << RESET
				  << std::endl;
		return;
	}

	_hitPoints = ( _hitPoints > amount ) ? ( _hitPoints - amount ) : 0;

	std::cout << YELLOW << "ClapTrap " << _name << RESET
			  << B_YELLOW << " Takes " << RESET
			  << CYAN << amount << RESET
			  << YELLOW << " points of Damage. Remaining HP: " << RESET
			  << CYAN << _hitPoints << RESET << std::endl;
}

/*------------------------------*/
/*  Define beRepaired function  */
/*------------------------------*/
void	ClapTrap::beRepaired( unsigned int amount ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << RED << "ClapTrap " << _name
				  << " can't Repair itself. Not enough Hit Points or Energy Points." << RESET
				  << std::endl;
		return;
	}

	_energyPoints--;
	_hitPoints += amount;

	std::cout << YELLOW << "ClapTrap " << _name << RESET
			  << B_YELLOW << " Repairs itself" << RESET
			  << YELLOW << " for " << RESET
			  << CYAN << amount << RESET
			  << YELLOW << " Hit Points. Current HP: " << RESET
			  << CYAN << _hitPoints << RESET
			  << std::endl;
}
