/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:19:47 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/17 20:09:57 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap( void ): ClapTrap() {
    std::cout << "FragTrap Default Constructor called" << std::endl;
    this->_hp = 100;
    this->_maxHp = 100;
    this->_mana = 100;
    this->_atkDmg = 30;
}

FragTrap::FragTrap( const std::string name ): ClapTrap( name ) {
    std::cout << "FragTrap Constructor for the name " << this->getName() << " called" << std::endl;
    this->_hp = 100;
    this->_maxHp = 100;
    this->_mana = 100;
    this->_atkDmg = 30;
}

FragTrap::FragTrap( const FragTrap &copy ): ClapTrap( copy ) {
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap Deconstructor for " << this->getName() << " called" << std::endl;
}

FragTrap    &FragTrap::operator=( const FragTrap &obj ) {
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if ( this != &obj ) {
        ClapTrap::operator=(obj);
    }
    return ( *this );
}

void    FragTrap::highFivesGuys( void ) const {
    if ( this->getHp() ) {
        std::cout << "FragTrap " << this->getName() << " highfives everyone!" << std::endl;
    }
    else {
        std::cout << "FragTrap " << this->getName() << " is dead, it cannot highfive anyone!" << std::endl;
    }
}