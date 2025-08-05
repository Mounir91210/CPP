/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:05:20 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 13:55:26 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}

void    FragTrap::attack(const std::string & target)
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

void    FragTrap::takeDamage(unsigned int amount)
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

void    FragTrap::beRepaired(unsigned int amount)
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

void    FragTrap::highFivesGuys()
{
    std::cout << this->_name << " wants to high fives everyone" << std::endl;
}