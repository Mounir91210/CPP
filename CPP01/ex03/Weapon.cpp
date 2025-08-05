/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 04:54:56 by modavid           #+#    #+#             */
/*   Updated: 2025/06/15 19:55:53 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string Weapon::getType(void) const
{
    return this->_type;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
