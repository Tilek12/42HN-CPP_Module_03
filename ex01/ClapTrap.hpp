/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:53:29 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/30 18:03:03 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

/*---------------*/
/*  Text colors  */
/*---------------*/
const std::string RED		= "\033[0;31m";
const std::string GREEN		= "\033[0;32m";
const std::string YELLOW	= "\033[0;33m";
const std::string BLUE		= "\033[0;34m";
const std::string PURPLE	= "\033[0;35m";
const std::string CYAN		= "\033[0;36m";
const std::string B_RED		= "\033[1;31m";
const std::string B_GREEN	= "\033[1;32m";
const std::string B_YELLOW	= "\033[1;33m";
const std::string B_BLUE	= "\033[1;34m";
const std::string B_PURPLE	= "\033[1;35m";
const std::string B_CYAN	= "\033[1;36m";
const std::string RESET		= "\033[0m";

/*-------------------------*/
/*  Define ClapTrap class  */
/*-------------------------*/
class ClapTrap {

protected:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:

	ClapTrap( const std::string name );
	ClapTrap( const ClapTrap& other );
	ClapTrap&	operator=( const ClapTrap& other );
	~ClapTrap( void );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

};

#endif
