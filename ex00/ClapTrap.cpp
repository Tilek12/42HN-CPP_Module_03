/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:14:19 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/28 17:54:38 by tkubanyc         ###   ########.fr       */
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

	std::cout << "ClapTrap "
			  << YELLOW << _name << RESET
			  << " Created."
			  << std::endl;
}

/*-----------------------------------*/
/*  ClapTrap Class copy constructor  */
/*-----------------------------------*/
ClapTrap::ClapTrap( const ClapTrap& other ) : _name( other._name ),
											  _hitPoints( other._hitPoints ),
											  _energyPoints( other._energyPoints ),
											  _attackDamage( other._attackDamage ) {

	std::cout << "ClapTrap "
			  << YELLOW << _name << RESET
			  << " Copy Created."
			  << std::endl;
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

	std::cout << "ClapTrap "
			  << YELLOW << _name << RESET
			  << " Assigned."
			  << std::endl;

	return *this;
}

/*-----------------------------*/
/*  ClapTrap Class destructor  */
/*-----------------------------*/
ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap "
			  << YELLOW << _name << RESET
			  << " Destroyed."
			  << std::endl;
}

/*--------------------------*/
/*  Define attack function  */
/*--------------------------*/
void	ClapTrap::attack( const std::string& target ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << RED << "ClapTrap " << _name
				  << " can't attack. Not enough Hit Points or Energy Points." << RESET
				  << std::endl;
		return;
	}

	_energyPoints--;

	std::cout << "ClapTrap "
			  << YELLOW << _name << RESET
			  << GREEN << " attacks " << target << RESET
			  << " with "
			  << CYAN << _attackDamage << RESET
			  << " points of Damage."
			  << std::endl;
}

/*------------------------------*/
/*  Define takeDamage function  */
/*------------------------------*/
void	ClapTrap::takeDamage( unsigned int amount ) {

	if ( _hitPoints == 0 ) {
		std::cout << RED << "ClapTrap " << _name
				  << " is already Down." << RESET
				  << std::endl;
		return;
	}

	_hitPoints = ( _hitPoints > amount ) ? ( _hitPoints - amount ) : 0;

	std::cout << "ClapTrap "
			  << YELLOW << _name << RESET
			  << PURPLE << " takes " << RESET
			  << CYAN << amount << RESET
			  << PURPLE << " points of Damage. " << RESET
			  << "Remaining HP: "
			  << CYAN << _hitPoints << RESET
			  << std::endl;
}

/*------------------------------*/
/*  Define beRepaired function  */
/*------------------------------*/
void	ClapTrap::beRepaired( unsigned int amount ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << RED << "ClapTrap " << _name
				  << " can't repair itself. Not enough Hit Points or Energy Points." << RESET
				  << std::endl;
		return;
	}

	_energyPoints--;
	_hitPoints += amount;

	std::cout << "ClapTrap "
			  << YELLOW << _name << RESET
			  << BLUE << " repairs itself" << RESET
			  << " for "
			  << CYAN << amount << RESET
			  << " Hit Points. Current HP: "
			  << CYAN << _hitPoints << RESET
			  << std::endl;
}
