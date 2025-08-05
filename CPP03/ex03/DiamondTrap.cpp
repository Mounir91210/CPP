/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:48:15 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 13:51:03 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->_nameDiamond = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap name constructor called" << std::endl;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & right_op)
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

void    DiamondTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints < 1)
    {
        std::cout << "DiamondTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    std::cout << "DiamondTrap " << this->_name << " takes " << amount << " damage" << std::endl;
    this->_hitPoints -= amount;
    return;
}

void    DiamondTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < 1)
    {
        std::cout << "DiamondTrap " << this->_name << " has no energy points" << std::endl;
        return;
    }
    if (this->_hitPoints < 1)
    {
        std::cout << "DiamondTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    std::cout << "DiamondTrap " << this->_name << " be repaired of " << amount << " hit points" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
    return;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My ClapTrap name is " << this->_name << std::endl;
    std::cout << "My DiamondTrap name is " << this->_nameDiamond << std::endl;
}
