/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:35:23 by jroth             #+#    #+#             */
/*   Updated: 2022/06/23 21:24:46 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void    printinfo(ClapTrap &clptrp) {
    std::cout.width(15); std::cout << std::left << clptrp.getName() + " Info:" << std::endl;
    std::cout.width(15); std::cout << std::right << "Hitpoints: " << clptrp.getHitPoints() << std::endl;
    std::cout.width(15); std::cout << std::right << "Enrgypnts: " << clptrp.getEnergyPoints() << std::endl;
    std::cout.width(15); std::cout << std::right << "Attckpnts: " << clptrp.getAttackPoints() << std::endl;
}

int main() {
    std::string s1 = "Dewie";
    
    ScavTrap scvtrp;
    FragTrap frgtrp(s1);
    printinfo(frgtrp);
    frgtrp.highFivesGuys();
    frgtrp.attack("Flo");
    printinfo(frgtrp);
    frgtrp.beRepaired(10);
    frgtrp.takeDamage(2000);
    printinfo(frgtrp);   
    printinfo(scvtrp);

    return 0;
}