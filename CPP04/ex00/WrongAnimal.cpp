/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:04:41 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 18:05:02 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->_type = "WrongAnimal";
    return;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
    return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & right_op)
{
    std::cout << "WrongAnimal copy assignement called" << std::endl;
    if (this != &right_op)
        this->_type = right_op._type;
    return (*this);
}

std::string WrongAnimal::getType(void)const
{
    return this->_type;
}

void    WrongAnimal::makeSound(void)const
{
    std::cout << "......" << std::endl;
}
