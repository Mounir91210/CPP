/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:03:49 by modavid           #+#    #+#             */
/*   Updated: 2025/07/14 15:47:44 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
    this->_type = "Animal";
    return;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return;
}

Animal::Animal(Animal const & copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Animal & Animal::operator=(Animal const & right_op)
{
    std::cout << "Animal copy assignement called" << std::endl;
    if (this != &right_op)
        this->_type = right_op._type;
    return (*this);
}

std::string Animal::getType(void)const
{
    return this->_type;
}

void    Animal::makeSound(void)const
{
    std::cout << "......" << std::endl;
}
 