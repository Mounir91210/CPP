/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 08:52:34 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 13:55:06 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

void    ScavTrap::attack(const std::string & target)
{
    if (this->_energyPoints < 1)
    {
        std::cout << this->_name << " has no energy points" << std::endl;
        return;
    }
    if (this->_hitPoints < 1)
    {
        std::cout << this->_name << " is dead" << std::endl;
        return;
    }
    std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints < 1)
    {
        std::cout << this->_name << " is dead" << std::endl;
        return;
    }
    std::cout << this->_name << " takes " << amount << " damage" << std::endl;
    this->_hitPoints -= amount;
    return;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < 1)
    {
        std::cout << this->_name << " has no energy points" << std::endl;
        return;
    }
    if (this->_hitPoints < 1)
    {
        std::cout << this->_name << " is dead" << std::endl;
        return;
    }
    std::cout << this->_name << " be repaired of " << amount << " hit points" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
    return;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
