/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:34:50 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 18:05:34 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    hitPoints = 100;
    energyPoints = 50;
    attackPoints = 20;
    std::cout << "ScavTrap default constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackPoints = 20;
    std::cout << "ScavTrap constructor was called for " << this->name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &clptrp) {
    name = (clptrp.getName());
    this->setHitPoints(clptrp.getHitPoints());
    this->setEnergyPoints(clptrp.getEnergyPoints());
	this->setAttackPoints(clptrp.getAttackPoints());
    std::cout << "ScavTrap copy constructor was called for " << this->name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &src) {
        name = (src.getName());
        hitPoints = (src.getHitPoints());
        energyPoints = (src.getEnergyPoints());
		attackPoints = (src.getAttackPoints());
    }
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor for " << this->getName() << " was called" << std::endl;
}

void ScavTrap::guardGate() {
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
        std::cout << "ScavTrap " + this->getName() + " is now in gatekeeper mode." << std::endl;
}
