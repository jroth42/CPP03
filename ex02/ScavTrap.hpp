/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:35:14 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 10:36:51 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string& name);
        ScavTrap(ScavTrap const &scvtrp);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &src);
        void guardGate();
};