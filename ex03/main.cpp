/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:35:23 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 18:14:19 by jroth            ###   ########.fr       */
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
	std::string s1 = "Dewie";
	std::string s2 = "Norbert";
	std::string s3 = "Fred";
	std::string s4 = "Diego";

	DiamondTrap	diamondtrap;
	std::cout << std::endl;

	std::cout << "Repairs\n";
	diamondtrap.takeDamage(14);
	diamondtrap.beRepaired(18);
	std::cout << std::endl;

	std::cout << "New class attack until exhaustion\n";
	

	DiamondTrap exhaust("exhaust");
	for (int i = 0; i < 2000; i++)
		exhaust.attack(s2);

	std::cout << std::endl;

	diamondtrap.guardGate();
	diamondtrap.attack(s2);
	std::cout << std::endl;

	std::cout << "New class personal method call\n";
	diamondtrap.highFivesGuys();
	std::cout << std::endl;

	diamondtrap.whoAmI();
	std::cout << std::endl;
	std::cout << "Repair over max hp\n";
	diamondtrap.beRepaired(18);

	std::cout <<  "Take damage\n";
	diamondtrap.takeDamage(50);

	// Die
	diamondtrap.takeDamage(50);

	// Do something after dying
	diamondtrap.beRepaired(20);
	diamondtrap.attack(s2);

	std::cout << std::endl;
    return 0;
}