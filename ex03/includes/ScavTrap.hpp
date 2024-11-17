/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:07:09 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/17 21:19:17 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap: virtual public ClapTrap {
    public:
        ScavTrap( void );
        ScavTrap( const std::string name );
        ScavTrap( const ScavTrap &copy );
        ~ScavTrap( void );
        
        ScavTrap    &operator=( const ScavTrap &obj );
        
        void    attack( const std::string &target );
        void    guardGate( void );
    
        bool    getMode( void ) const;

    protected:
        unsigned int    _sHp;
        unsigned int    _sMaxHp;
        unsigned int    _sMana;
        unsigned int    _sAtkDmg;

    private:
        bool    _gateKeeperMode;
        
};

#endif