/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:25:38 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 21:05:44 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

/*----------------------------*/
/*  Define DiamondTrap class  */
/*----------------------------*/
class	DiamondTrap : public FragTrap, public ScavTrap {

private:

	std::string	_name;

public:

	DiamondTrap( const std::string& name );
	DiamondTrap( const DiamondTrap& other );
	DiamondTrap& operator=( const DiamondTrap& other );
	~DiamondTrap( void );

	void	whoAmI( void );

	using	ScavTrap::attack;

};

#endif
