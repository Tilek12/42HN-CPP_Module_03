/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:14:19 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/28 16:37:56 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name( name ),
										 _hitPoints( 10 ),
										 _energyPoints( 10 ),
										 _attackDamage( 0 ) {

	std::cout << "ClapTrap " << _name << " Created." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) : _name( other._name ),
											  _hitPoints( other._hitPoints ),
											  _energyPoints( other._energyPoints ),
											  _attackDamage( other._attackDamage ) {

	std::cout << "ClapTrap " << _name << " Copy Created." << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other ) {

	if ( this != &other ) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}

	std::cout << "ClapTrap " << _name << " Assigned." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap " << _name << " Destroyed." << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << "ClapTrap " << _name
				  << " can't attack. Not enough Hit Points or Energy Points." << std::endl;
		return;
	}

	_energyPoints--;
	std::cout << "ClapTrap " << _name
			  << " attacks " << target
			  << ", causing " << _attackDamage << " points of Damage." << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if ( _hitPoints == 0 ) {
		std::cout << "ClapTrap " << _name << " is already Dead." << std::endl;
		return;
	}

	_hitPoints = ( _hitPoints > amount ) ? ( _hitPoints - amount ) : 0;
	std::cout << "ClapTrap " << _name
			  << " takes " << amount
			  << " points of Damage. Remaining HP: " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << "ClapTrap " << _name
				  << " can't repair itself. Not enough Hit Points or Energy Points." << std::endl;
		return;
	}

	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name
			  << " repairs itself for " << amount
			  << " Hit Points. Current HP: " << _hitPoints << std::endl;
}
