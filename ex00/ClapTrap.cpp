/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:14:19 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/27 12:24:43 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name( name ),
										_hitPoints( 10 ),
										_energyPoints( 10 ),
										_attackDamage( 0 ) {

	std::cout << "ClapTrap " << _name << "created." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {

	std::cout <<
	*this = other;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other ) {

	if ( this != &other ) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}

	return *this;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap " << _name << "destroyed." << std::endl;
}
