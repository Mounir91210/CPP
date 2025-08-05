/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 06:55:41 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 13:56:17 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Default constructor called" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & right_op)
{
    std::cout << "Copy assignement called" << std::endl;
    if (this != &right_op)
    {
        this->_attackDamage = right_op._attackDamage;
        this->_energyPoints = right_op._energyPoints;
        this->_hitPoints = right_op._hitPoints;
        this->_name = right_op._name;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string & target)
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

void    ClapTrap::takeDamage(unsigned int amount)
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

void    ClapTrap::beRepaired(unsigned int amount)
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
