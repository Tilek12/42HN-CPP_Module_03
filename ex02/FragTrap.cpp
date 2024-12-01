/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:48:20 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 16:07:16 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*------------------------------*/
/*  FragTrap Class constructor  */
/*------------------------------*/
FragTrap::FragTrap( const std::string& name ) : ClapTrap( name ) {

	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << BLUE << "FragTrap " << _name << RESET
			  << B_BLUE << " Created." << RESET << std::endl;
}

/*-----------------------------------*/
/*  FragTrap Class copy constructor  */
/*-----------------------------------*/
FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other ) {
	std::cout << BLUE << "FragTrap " << _name << RESET
			  << B_BLUE << " Copied." << RESET << std::endl;
}

/*-------------------------------------------*/
/*  FragTrap Class copy assignment operator  */
/*-------------------------------------------*/
FragTrap&	FragTrap::operator=( const FragTrap& other ) {

	if ( this != &other ) {
		ClapTrap::operator=( other );
	}

	std::cout << BLUE << "FragTrap " << _name << RESET
			  << B_BLUE << " Assigned." << RESET << std::endl;
	return *this;
}

/*-----------------------------*/
/*  FragTrap Class destructor  */
/*-----------------------------*/
FragTrap::~FragTrap( void ) {
	std::cout << BLUE << "ScavTrap " << _name << RESET
			  << B_BLUE << " Destroyed." << RESET << std::endl;
}

/*--------------------------------*/
/*  Define highFiveGuys function  */
/*--------------------------------*/
void	FragTrap::highFivesGuys( void ) {
	std::cout << BLUE << "FragTrap " << _name << RESET
			  << B_BLUE << " Requests a high five 🙌" << RESET << std::endl;
}
