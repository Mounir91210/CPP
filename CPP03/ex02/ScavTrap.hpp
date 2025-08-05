/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 08:51:29 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 13:42:24 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAV_H
# define SCAVTRAV_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        
    public :
    
        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const & copy);
        ScavTrap & operator =(ScavTrap const & right_op);

        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    guardGate(void);        
};

#endif