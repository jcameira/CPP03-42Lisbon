/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:06:51 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/17 21:22:19 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( void ): ClapTrap(), _gateKeeperMode( false ) {
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    this->_hp = 100;
    this->_maxHp = 110;
    this->_mana = 50;
    this->_atkDmg = 20;
    this->_sHp = 100;
    this->_sMaxHp = 110;
    this->_sMana = 50;
    this->_sAtkDmg = 20;
}

ScavTrap::ScavTrap( const std::string name ): ClapTrap( name ), _gateKeeperMode( false ) {
    std::cout << "ScavTrap Constructor for the name " << this->getName() << " called" << std::endl;
    this->_hp = 100;
    this->_maxHp = 110;
    this->_mana = 50;
    this->_atkDmg = 20;
    this->_sHp = 100;
    this->_sMaxHp = 110;
    this->_sMana = 50;
    this->_sAtkDmg = 20;
}

ScavTrap::ScavTrap( const ScavTrap &copy ): ClapTrap( copy ) {
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    this->_gateKeeperMode = copy.getMode();
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap Deconstructor for " << this->getName() << " called" << std::endl;
}

ScavTrap    &ScavTrap::operator=( const ScavTrap &obj ) {
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if ( this != &obj ) {
        ClapTrap::operator=(obj);
        this->_gateKeeperMode = obj.getMode();
    }
    return ( *this );
}

void    ScavTrap::attack( const std::string& target ) {
    if ( this->getHp() && this->getMana() ) {
        this->_mana--;
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAtkDmg() << " points of damage!" << std::endl;
    }
    else if ( !this->getHp() ) {
        std::cout << "ScavTrap " << this->getName() << " is dead, it can't attack!" << std::endl;
    }
    else if ( !this->getMana() ) {
        std::cout << "ScavTrap " << this->getName() << " is out of mana, it can't attack!" << std::endl;
    }
}

void    ScavTrap::guardGate( void ) {
    if ( this->getHp() && !this->getMode() ) {
        std::cout << "ScavTrap " << this->getName() << " has entered Gate Keeper mode!" << std::endl;
        this->_gateKeeperMode = !this->_gateKeeperMode;
    }
    else if ( !this->getHp() ) {
        std::cout << "ScavTrap " << this->getName() << " is already dead, it can't switch mode!" << std::endl;
    }
    else if ( this->getMode() ) {
        std::cout << "ScavTrap " << this->getName() << " is already in Gate Keeper mode!" << std::endl;
    }
}

bool    ScavTrap::getMode( void ) const {
    return ( this->_gateKeeperMode );
}