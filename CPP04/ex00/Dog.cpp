/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:30:21 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 14:30:39 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    return;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return;
}

Dog::Dog(Dog const & copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Dog & Dog::operator=(Dog const & right_op)
{
    std::cout << "Dog copy assignement called" << std::endl;
    if (this != &right_op)
        this->_type = right_op._type;
    return (*this);
}

std::string Dog::getType(void)const
{
    return this->_type;
}

void    Dog::makeSound(void)const
{
    std::cout << "Wouaf" << std::endl;
}
