/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:59:03 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/17 21:19:23 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap: public ScavTrap, public FragTrap {
    public:
        DiamondTrap( void );
        DiamondTrap( std::string name );
        DiamondTrap( const DiamondTrap &copy );
        ~DiamondTrap( void );

        DiamondTrap &operator=( const DiamondTrap &obj );

        void    attack( const std::string& target );
        void    whoAmI( void );
    
    private:
        std::string _name;
        
};

#endif