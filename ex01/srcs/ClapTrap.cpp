/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:14:58 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 00:51:43 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap( void ): _name( "John Doe" ), _hp( 10 ), _maxHp( 10 ) , _mana( 10 ), _atkDmg( 0 )  {
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string name ): _name( name ), _hp( 10 ), _maxHp( 10 ) , _mana( 10 ), _atkDmg( 0 ) {
    std::cout << "ClapTrap Constructor for the name " << this->getName() << " called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) {
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap Deconstructor for " << this->getName() << " called" << std::endl;
}

ClapTrap    &ClapTrap::operator=( const ClapTrap &obj ) {
    std::cout << "ClapTrap Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_name = obj.getName();
        this->_hp = obj.getHp();
        this->_maxHp = obj.getMaxHp();
        this->_mana = obj.getMana();
        this->_atkDmg = obj.getAtkDmg();
    }
    return ( *this );
}

void    ClapTrap::attack( const std::string& target ) {
    if ( this->getHp() && this->getMana() ) {
        this->_mana--;
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAtkDmg() << " points of damage!" << std::endl;
    }
    else if ( !this->getHp() ) {
        std::cout << "ClapTrap " << this->getName() << " is dead, it can't attack!" << std::endl;
    }
    else if ( !this->getMana() ) {
        std::cout << "ClapTrap " << this->getName() << " is out of mana, it can't attack!" << std::endl;
    }
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if ( this->getHp() ) {
        if ( this->getHp() >= amount )
            this->_hp -= amount;
        else
            this->_hp = 0;
        std::cout << "ClapTrap " << this->getName() << " just took " << amount << " points of damage, taking him down to " << this->getHp() << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " is already dead!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if ( this->getHp() && this->getMana() && this->getHp() < this->getMaxHp() ) {
        if ( this->getHp()  + amount <= this->getMaxHp() ) {
            this->_hp += amount;
            std::cout << "ClapTrap " << this->getName() << " just rapaired itself for " << amount << " points of damage, taking him up to " << this->getHp() << " hit points!" << std::endl;
        }
        else {
            this->_hp = this->getMaxHp();
            std::cout << "ClapTrap " << this->getName() << " just tried rapairing himself for " << amount << " points of damage, but it could only go up to " << this->getHp() << " hit points!" << std::endl;
        }
    }
    else if ( !this->getHp() ) {
        std::cout << "ClapTrap " << this->getName() << " is dead, you cannot repair what is already gone!" << std::endl;
    }
    else if ( !this->getMana() ) {
        std::cout << "ClapTrap " << this->getName() << " is out of mana, it can't repair itself!" << std::endl;
    }
    else if ( this->getHp() == this->getMaxHp() ) {
        std::cout << "ClapTrap " << this->getName() << " is already brimming with life!" << std::endl;
    }
}

std::string const   &ClapTrap::getName( void ) const {
    return ( this->_name );
}

unsigned int const  &ClapTrap::getHp( void ) const {
    return ( this->_hp );
}

unsigned int const  &ClapTrap::getMaxHp( void ) const {
    return ( this->_maxHp );
}

unsigned int const  &ClapTrap::getMana( void ) const {
    return ( this->_mana );
}

unsigned int const  &ClapTrap::getAtkDmg( void ) const {
    return ( this->_atkDmg );
}