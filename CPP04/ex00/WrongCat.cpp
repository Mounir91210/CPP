/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:06:22 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 18:07:26 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
    return;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
    return;
}

WrongCat::WrongCat(WrongCat const & copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
    return ;
}

WrongCat & WrongCat::operator=(WrongCat const & right_op)
{
    std::cout << "WrongCat copy assignement called" << std::endl;
    if (this != &right_op)
        this->_type = right_op._type;
    return (*this);
}

std::string WrongCat::getType(void)const
{
    return this->_type;
}

void    WrongCat::makeSound(void)const
{
    std::cout << "Miaouw" << std::endl;
}
