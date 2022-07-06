/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:59:18 by jroth             #+#    #+#             */
/*   Updated: 2022/07/06 21:30:47 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("NoName") {
    std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string& name):  name(name),
                                        hitPoints(10),
                                        energyPoints(10),
                                        attackPoints(0) {
    std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clptrp): name(clptrp.name),
                                            hitPoints(clptrp.hitPoints),
                                            energyPoints(clptrp.energyPoints),
                                            attackPoints(clptrp.attackPoints) {
    std::cout << "ClapTrap copy constructor was called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor for " << this->getName() << " was called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this != &src) {
        this->name = src.getName();
		this->attackPoints = src.getAttackPoints();
        this->energyPoints = src.getEnergyPoints();
        this->hitPoints = src.getHitPoints();
    }
	return *this;
}


std::string ClapTrap::getName() const {
    return this->name;
}

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 || this->hitPoints > 0) {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
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

unsigned int ClapTrap::getHitPoints(void) const {
    return this->hitPoints;
}

unsigned int ClapTrap::getAttackPoints(void) const {
    return this->attackPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
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
    if (this->getHitPoints() > 0 && this->energyPoints > 0) {
        this->energyPoints--;
        this->setHitPoints(this->getHitPoints() + amount);
        std::cout << "ClapTrap " << this->getName() << " repaired itself for " << amount << " points. " << std::endl;
    }
}