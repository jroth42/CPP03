/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:35:23 by jroth             #+#    #+#             */
/*   Updated: 2022/06/23 17:49:46 by jroth            ###   ########.fr       */
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

    ScavTrap ScvTrp(s1);
    printinfo(ScvTrp);
    ScvTrp.guardGate();

    return 0;
}