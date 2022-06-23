/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:34:50 by jroth             #+#    #+#             */
/*   Updated: 2022/06/23 17:52:40 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string& name) {
    this->setName(name);
    this->setAttackPoints(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor for " << this->getName() << " was called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " + this->getName() + " is now in Gate keeper mode." << std::endl;
}