/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:08:08 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 17:22:58 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor for " << this->getName() << " was called" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("NoName_clap_trap"), ScavTrap("NoName_clap_trap"), FragTrap("NoName_clap_trap") {
    ScavTrap energy = DiamondTrap::ScavTrap();
    energyPoints = energy.getEnergyPoints();
    name = "NoName";
    // this->setAttackPoints(DiamondTrap::FragTrap::getAttackPoints());
    std::cout << "DiamondTrap default constructor was called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), ScavTrap(name + "_clap_trap"), FragTrap(name + "_clap_trap") {
    ScavTrap energy = DiamondTrap::ScavTrap();
    
    this->name = name;
    attackPoints = (FragTrap::getAttackPoints());
    energyPoints = energy.getEnergyPoints();
    hitPoints = (FragTrap::getHitPoints());
    std::cout << "DiamondTrap constructor was called for " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &clptrp) {
    this->setName(clptrp.getName());
	this->setAttackPoints(clptrp.getAttackPoints());
    this->setEnergyPoints(20);
    this->setHitPoints(clptrp.getHitPoints());
    std::cout << "DiamondTrap copy constructor was called for " << this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	if (this != &src) {
        this->setName(src.getName());
		this->setAttackPoints(src.getAttackPoints());
        this->setEnergyPoints(src.getEnergyPoints());
        this->setHitPoints(src.getHitPoints());
    }
	return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << name << ": My Name is " << name << " but i was constructed as " << DiamondTrap::ClapTrap::getName() <<std::endl;
}