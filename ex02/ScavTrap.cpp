/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:34:50 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 11:54:58 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackPoints(20);
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string& name) {
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackPoints(20);
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &clptrp) {
    this->setName(clptrp.getName());
    this->setHitPoints(clptrp.getHitPoints());
    this->setEnergyPoints(clptrp.getEnergyPoints());
	this->setAttackPoints(clptrp.getAttackPoints());
    std::cout << "ScavTrap copy constructor was called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &src) {
        this->setName(src.getName());
        this->setHitPoints(src.getHitPoints());
        this->setEnergyPoints(src.getEnergyPoints());
		this->setAttackPoints(src.getAttackPoints());
    }
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor for " << this->getName() << " was called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " + this->getName() + " is now in gatekeeper mode." << std::endl;
}
