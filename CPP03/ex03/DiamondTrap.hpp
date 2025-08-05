/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:48:17 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 13:46:05 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :

        std::string _nameDiamond;

    public :
    
        DiamondTrap(void);
        ~DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & copy);
        DiamondTrap & operator=(DiamondTrap const & right_op);

        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    whoAmI(void); 
        using   ScavTrap::attack;
};

#endif