/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:20:09 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/17 21:19:20 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>

class FragTrap: virtual public ClapTrap {
    public:
        FragTrap( void );
        FragTrap( const std::string name );
        FragTrap( const FragTrap &copy );
        ~FragTrap( void );
        
        FragTrap    &operator=( const FragTrap &obj );
    
        void    highFivesGuys( void ) const;
    
    protected:
        unsigned int    _fHp;
        unsigned int    _fMaxHp;
        unsigned int    _fMana;
        unsigned int    _fAtkDmg;
        
};

#endif