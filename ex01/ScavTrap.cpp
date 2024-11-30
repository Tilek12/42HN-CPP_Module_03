/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:35:53 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/30 16:22:30 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( const std::string& name ) : ClapTrap( name ) {

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << "ScavTrap " << _name << " Created." << std::endl;
}

ScavTrap::ScavTrap ( const ScavTrap& other ) : ClapTrap ( other ) {
	std::cout << "ScavTrap " << _name << " Copied." << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other ) {

	if ( this != &other ) {
		ClapTrap::operator=( other );
	}

	std::cout << "ScavTrap " << _name << " Assigned." << std::endl;
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << " ScavTrap " << _name << " Destroyed." << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {

	if ( _hitPoints == 0 || _energyPoints == 0 ) {
		std::cout << "ScavTrap " << _name << " can't attack. Not enough Hit Points or Energy Points." << std::endl;
	}

	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << " with " << _attackDamage << " points of Damage." << std::endl;
}

void	ScavTrap::guardGate ( void ) {
	std::cout << "ScavTrap" << _name << " is now in Gate keeper mode." << std::endl;
}
