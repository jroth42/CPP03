/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:59:58 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 15:45:16 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string> 

class ClapTrap {
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackPoints;
    public:
        //constructors
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &clptrp);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &src);
        //setters
        void setName(std::string name);
        void setHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);
        void setAttackPoints(unsigned int amount);
        //getters
        std::string getName(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getAttackPoints(void) const;
        //members
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};