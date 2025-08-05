/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:12:52 by modavid           #+#    #+#             */
/*   Updated: 2025/07/16 10:15:55 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    return ;
}

Character::~Character(void)
{
    return ;
}

Character::Character(std::string const name)
{
    this->_name = name;
    return ;
}

Character::Character(Character const & copy)
{
    this->_name = copy._name;
    return ;
}

Character & Character::operator=(Character const & right_op)
{
    if (this != &right_op)
        this->_name = right_op._name;
    return (*this);
}

std::string const & Character::getName(void)const
{
    return (this->_name);    
}

void    Character::equip(AMateria * m)
{
    
}
