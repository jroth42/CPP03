/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:59:58 by jroth             #+#    #+#             */
/*   Updated: 2022/06/23 17:44:33 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string> 

class ClapTrap {
    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackPoints;
    public:
        //constructors
        ClapTrap();
        ClapTrap(std::string& name);
        ~ClapTrap();
        //setters
        void setName(std::string name);
        void setHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);
        void setAttackPoints(unsigned int amount);
        //getters
        std::string getName(void);
        unsigned int getEnergyPoints(void);
        unsigned int getHitPoints(void);
        unsigned int getAttackPoints(void);
        //members
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};