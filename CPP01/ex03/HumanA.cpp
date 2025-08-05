/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 04:54:49 by modavid           #+#    #+#             */
/*   Updated: 2025/06/26 16:51:24 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : _weapon(weaponA)
{
    this->_name = name;
    return;
}

HumanA::~HumanA(void)
{
    return;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType();
}
