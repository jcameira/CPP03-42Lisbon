/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:58:32 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 00:51:43 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap( void ): ClapTrap( "John Doe_clap_name" ) {
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
    this->_name = "John Doe";
    this->_hp = FragTrap::_fHp;
    this->_maxHp = FragTrap::_fMaxHp;
    this->_mana = ScavTrap::_sMana;
    this->_atkDmg = FragTrap::_fAtkDmg;
}

DiamondTrap::DiamondTrap( const std::string name ): ClapTrap( name + "_clap_name" ) {
    std::cout << "DiamondTrap Constructor for the name " << this->getName() << " called" << std::endl;
    this->_name = name;
    this->_hp = FragTrap::_fHp;
    this->_maxHp = FragTrap::_fMaxHp;
    this->_mana = ScavTrap::_sMana;
    this->_atkDmg = FragTrap::_fAtkDmg;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ): ClapTrap( copy ), ScavTrap( copy ), FragTrap( copy ) {
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
    this->_name = copy._name;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap Deconstructor for " << this->getName() << " called" << std::endl;
}

DiamondTrap    &DiamondTrap::operator=( const DiamondTrap &obj ) {
    std::cout << "DiamondTrap Assignment operator called" << std::endl;
    if ( this != &obj ) {
        ClapTrap::operator=(obj);
    }
    return ( *this );
}

void    DiamondTrap::attack( const std::string& target ) {
    ScavTrap::attack( target );
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "I am a DiamondTrap named " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << ", my maxhp is " << this->getMaxHp() << ", my mana is " << this->getMana() << " and my atk dmg is " << this->getAtkDmg() << std::endl;
}