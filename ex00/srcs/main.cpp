/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:15:00 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/17 18:54:54 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main() {
    std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
	    std::cout << "\033[34mConstructing\033[0m" << std::endl;
	    ClapTrap a;
	    ClapTrap b( "Cody" );
        
	    std::cout << "\033[34mTesting\033[0m" << std::endl;
	    a.attack( "some other robot" );
	    a.takeDamage( 10 );
	    a.takeDamage( 10 );
	    a.beRepaired( 5 );
	    a.attack( "some other other robot" );
	    b.beRepaired( 3 );
	    for ( int i = 0; i < 12; i++ )
	    	b.attack( "Cody-clone" );
	    b.beRepaired( 3 );
	    std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    }
	return ( 0 );
}