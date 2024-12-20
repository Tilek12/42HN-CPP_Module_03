/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:35:35 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/01 15:46:41 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

/*-------------------------*/
/*  Define FragTrap class  */
/*-------------------------*/
class FragTrap : public ClapTrap {

public:

	FragTrap( const std::string& name );
	FragTrap( const FragTrap& other );
	FragTrap& operator=( const FragTrap& other );
	~FragTrap( void );

	void	highFivesGuys( void );

};

#endif
