/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:59:18 by jroth             #+#    #+#             */
/*   Updated: 2022/06/23 17:53:55 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string& name): name(name) {
    this->setAttackPoints(0);
    this->setHitPoints(10);
    this->setEnergyPoints(10);
    std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor for " << this->getName() << " was called." << std::endl;
}


std::string ClapTrap::getName() {
    return this->name;
}

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 || this->hitPoints > 0) {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackPoints() << " points of damage!" << std::endl;
    }
}

void ClapTrap::setName(std::string name) {
    this->name = name;
}

void ClapTrap::setAttackPoints(unsigned int amount) {
    this->attackPoints = amount;
}

void ClapTrap::setHitPoints(unsigned int amount) {
    this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount) {
    this->energyPoints = amount;
}

unsigned int ClapTrap::getHitPoints(void) {
    return this->hitPoints;
}

unsigned int ClapTrap::getAttackPoints(void) {
    return this->attackPoints;
}

unsigned int ClapTrap::getEnergyPoints() {
    return this->energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= this->getHitPoints())
        this->setHitPoints(0);
    else
        this->setHitPoints(this->getHitPoints() - amount);
    std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage! (" << this->getHitPoints() << " points left)" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->getHitPoints() > 0) {
        this->energyPoints--;
        this->setHitPoints(this->getHitPoints() + amount);
        std::cout << "ClapTrap " << this->getName() << " repaired itself for " << amount << " points. " << std::endl;
    }
}