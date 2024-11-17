/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:14:56 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/17 20:04:41 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    public:
        ClapTrap( void );
        ClapTrap( const std::string name );
        ClapTrap( const ClapTrap &copy );
        ~ClapTrap( void );
        
        ClapTrap   &operator=( const ClapTrap &obj );

        void    attack( const std::string& target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );

        std::string const   &getName( void ) const;
        unsigned int const  &getHp( void ) const;
        unsigned int const  &getMaxHp( void ) const;
        unsigned int const  &getMana( void ) const;
        unsigned int const  &getAtkDmg( void ) const;

    protected:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _maxHp;
        unsigned int    _mana;
        unsigned int    _atkDmg;
    
};

#endif