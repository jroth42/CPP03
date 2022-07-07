/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:35:23 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 10:46:58 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void    printinfo(ScavTrap &scvtrp) {
    std::cout.width(15);  std::cout << std::left << scvtrp.getName() + " Info:" << std::endl;
    std::cout.width(15);  std::cout << std::right << "Hitpoints: " << scvtrp.getHitPoints() << std::endl;
    std::cout.width(15);  std::cout << std::right << "Enrgypnts: " << scvtrp.getEnergyPoints() << std::endl;
}

int main() {
    std::string s1 = "Dewie";
    std::string s2 = "Norbert";

    ScavTrap ScvTrp(s1);
    ScavTrap ScvTrp2(s2);
    ScavTrap cpycnst(ScvTrp2);
    ScavTrap assign = ScvTrp;
    ScavTrap zero;

    printinfo(zero);
    printinfo(ScvTrp);
    printinfo(ScvTrp2);
    printinfo(cpycnst);
    printinfo(assign);

    ScvTrp.guardGate();

    return 0;
}