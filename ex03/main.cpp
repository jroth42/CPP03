/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:35:23 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 17:15:35 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void    printinfo(ClapTrap &clptrp) {
    std::cout.width(15); std::cout << std::left << clptrp.getName() + " Info:" << std::endl;
    std::cout.width(15); std::cout << std::right << "Hitpoints: " << clptrp.getHitPoints() << std::endl;
    std::cout.width(15); std::cout << std::right << "Enrgypnts: " << clptrp.getEnergyPoints() << std::endl;
    std::cout.width(15); std::cout << std::right << "Attckpnts: " << clptrp.getAttackPoints() << std::endl;
}

int main() {
    // std::string s1 = "Dewie";
    
    // DiamondTrap dmnd(s1);
    // dmnd.whoAmI();
    // dmnd.takeDamage(40);
    // dmnd.beRepaired(20);
    // printinfo(dmnd);
    // dmnd.whoAmI();
    // dmnd.whoAmI();
    // printinfo(dmnd);
    // DiamondTrap dmnd2;
    // DiamondTrap dmnd3
    // printinfo(frgtrp2);
    // frgtrp.highFivesGuys();
    // frgtrp.attack("Flo");
    // printinfo(frgtrp);
    // frgtrp.beRepaired(10);
    // frgtrp.takeDamage(2000);
    // printinfo(frgtrp);   
    // printinfo(scvtrp);
	std::string s1 = "Clyde";
	std::string s2 = "Scarlet";
	std::string s3 = "Fred";
	std::string s4 = "Diego";

	// Constructors
	DiamondTrap	diamondtrap;
	std::cout << std::endl;

	// Repairs
	diamondtrap.takeDamage(14);
	diamondtrap.beRepaired(18);
	std::cout << std::endl;

	// New class attack until exhaustion
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	std::cout << std::endl;

	diamondtrap.guardGate();
	diamondtrap.attack(s2);
	std::cout << std::endl;

	// New class personal method call
	diamondtrap.highFivesGuys();
	std::cout << std::endl;

	diamondtrap.whoAmI();
	std::cout << std::endl;
	// Repair over max hp
	diamondtrap.beRepaired(18);

	// Take damage
	diamondtrap.takeDamage(50);

	// Die
	diamondtrap.takeDamage(50);

	// Do something after dying
	diamondtrap.beRepaired(20);
	diamondtrap.attack(s2);

	std::cout << std::endl;
    return 0;
}