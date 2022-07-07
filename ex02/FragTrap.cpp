/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:58:18 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 18:05:53 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap constructor was called" << std::endl;
}

FragTrap::FragTrap(std::string& name) {
    this->setName(name);
    this->setAttackPoints(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    std::cout << "FragTrap constructor was called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor for " << this->getName() << " was called" << std::endl;
}


FragTrap::FragTrap(FragTrap const &clptrp) {
    this->setName(clptrp.getName());
	this->setAttackPoints(clptrp.getAttackPoints());
    this->setEnergyPoints(clptrp.getEnergyPoints());
    this->setHitPoints(clptrp.getHitPoints());
    std::cout << "FragTrap copy constructor was called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &src) {
        this->setName(src.getName());
		this->setAttackPoints(src.getAttackPoints());
        this->setEnergyPoints(src.getEnergyPoints());
        this->setHitPoints(src.getHitPoints());
    }
	return *this;
}

void FragTrap::highFivesGuys() {
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
        std::cout << "ClapTrap " << this->getName() << " wants a positive high five!" << std::endl;
}

