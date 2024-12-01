/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:27:05 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 15:44:59 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

/*-------------------------*/
/*  Define ScavTrap class  */
/*-------------------------*/
class ScavTrap : public ClapTrap {

public:

	ScavTrap( const std::string& name );
	ScavTrap( const ScavTrap& other );
	ScavTrap& operator=( const ScavTrap& other );
	~ScavTrap( void );

	void	attack( const std::string& target );
	void	guardGate( void );

};

#endif
