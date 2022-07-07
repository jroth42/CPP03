/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:58:23 by jroth             #+#    #+#             */
/*   Updated: 2022/07/07 10:52:54 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string& name);
        FragTrap(FragTrap const &clptrp);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &src);
        void highFivesGuys();
};
