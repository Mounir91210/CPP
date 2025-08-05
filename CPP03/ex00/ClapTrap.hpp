/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 06:55:47 by modavid           #+#    #+#             */
/*   Updated: 2025/07/11 07:35:46 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

class ClapTrap
{
    private :
        
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
    
    public :
    
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(ClapTrap const & copy);
        ClapTrap & operator=(ClapTrap const & right_op);
        
        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif