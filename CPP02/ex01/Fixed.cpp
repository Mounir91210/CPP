/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:22 by modavid           #+#    #+#             */
/*   Updated: 2025/07/10 08:43:51 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return;
}

Fixed & Fixed::operator=(Fixed const & right_op)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &right_op)
        this->_value = right_op._value; 
    return (*this);
}

Fixed::Fixed(const int i) : _value(i * (1 << this->_bits))
{
    std::cout << "Int constructor called" << std::endl;
    return;
}

Fixed::Fixed(const float f) : _value(f * (1 << this->_bits))
{
    std::cout << "Float constructor called" << std::endl;
    return;
}

int Fixed::toInt(void)const
{
    return (this->_value / (1 << this->_bits));
}

float Fixed::toFloat(void)const
{
    return ((float)this->_value / (1 << this->_bits));
}
