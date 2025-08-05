/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:25:05 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 14:29:10 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    return;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    return;
}

Cat::Cat(Cat const & copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Cat & Cat::operator=(Cat const & right_op)
{
    std::cout << "Cat copy assignement called" << std::endl;
    if (this != &right_op)
        this->_type = right_op._type;
    return (*this);
}

std::string Cat::getType(void)const
{
    return this->_type;
}

void    Cat::makeSound(void)const
{
    std::cout << "Miaouw" << std::endl;
}
