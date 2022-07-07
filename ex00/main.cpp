/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:35:23 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 18:00:08 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    printinfo(ClapTrap &clptrp) {
    std::cout.width(15);  std::cout << std::left << clptrp.getName() + " Info:" << std::endl;
    std::cout.width(15);  std::cout << std::right << "Hitpoints: " << clptrp.getHitPoints() << std::endl;
    std::cout.width(15);  std::cout << std::right << "Enrgypnts: " << clptrp.getEnergyPoints() << std::endl;
    std::cout.width(15);  std::cout << std::right << "Attckpnts: " << clptrp.getAttackPoints() << std::endl;
}

int main() {
    std::string s1 = "Dewie";
    std::string s2 = "Norbert";

    ClapTrap ClpTrp3;
    ClapTrap ClpTrp1(s1);
    ClapTrap ClpTrp2(s2);
    ClapTrap copy(ClpTrp2);
    ClpTrp3 = copy;

    ClpTrp3.attack("Dewie");
    printinfo(ClpTrp3);

    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    printinfo(ClpTrp2);
    ClpTrp2.beRepaired(3);
    printinfo(ClpTrp2);
    ClpTrp2.beRepaired(3);
    printinfo(ClpTrp2);
    ClpTrp2.beRepaired(3);
    
    ClpTrp2.takeDamage(3);
    printinfo(ClpTrp2);
    printinfo(ClpTrp1);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.attack(s2);
    ClpTrp1.beRepaired(1);
    ClpTrp1.beRepaired(1);
    ClpTrp1.beRepaired(1);
    ClpTrp1.beRepaired(1);
    ClpTrp1.beRepaired(1);
    ClpTrp1.beRepaired(1);
    ClpTrp1.beRepaired(1);
    printinfo(ClpTrp1);
    return 0;
}