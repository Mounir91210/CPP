/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:05:17 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 17:00:30 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private :

    public :
    
        FragTrap(void);
        FragTrap(std::string name);
        ~FragTrap(void);
        FragTrap(FragTrap const & copy);
        FragTrap & operator=(FragTrap const & right_op);

        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    highFivesGuys(void); 
};

#endif