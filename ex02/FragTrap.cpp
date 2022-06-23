/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:58:18 by jroth             #+#    #+#             */
/*   Updated: 2022/06/23 18:45:45 by jroth            ###   ########.fr       */
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

void FragTrap::highFivesGuys() {
    std::cout << "ClapTrap " << this->getName() << " wants a positive high five!" << std::endl;
}

