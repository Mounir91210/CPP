/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:22 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 05:52:43 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
    return;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(const int i) : _value(i * (1 << this->_bits))
{
    // std::cout << "Int constructor called" << std::endl; 
    return;
}

Fixed::Fixed(const float f) : _value(f * (1 << this->_bits))
{
    // std::cout << "Float constructor called" << std::endl; 
    return;
}

Fixed::Fixed(Fixed const & copy)
{
    // std::cout << "Copy constructor called" << std::endl; 
    *this = copy;
    return;
}

Fixed & Fixed::operator=(Fixed const & right_op)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &right_op)
        this->_value = right_op._value;
    return (*this);
}

Fixed   Fixed::operator+(Fixed const & right_op)const
{
    return (Fixed(this->_value + right_op._value));
}

Fixed   Fixed::operator-(Fixed const & right_op)const
{
    return (Fixed(this->_value - right_op._value));
}

Fixed   Fixed::operator*(Fixed const & right_op)const
{
    std::cout << "value = " << this->_value / (1 << this->_bits) << std::endl;
    std::cout << "right value = " << right_op._value / (1 << this->_bits) << std::endl;
    return (Fixed(this->_value / (1 << this->_bits) * right_op._value / (1 << this->_bits)));
}

Fixed   Fixed::operator/(Fixed const & right_op)const
{
    return (Fixed(this->_value / (1 << this->_bits) / right_op._value / (1 << this->_bits)));
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++this->_value;
    return (tmp);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp = *this;
    --this->_value;
    return (tmp);
}

Fixed & Fixed::operator++(void)
{
    ++this->_value;
    return (*this);
}

Fixed & Fixed::operator--(void)
{
    --this->_value;
    return (*this);
}

Fixed & Fixed::min(Fixed & left_op, Fixed & right_op)
{
    if (left_op < right_op)
        return (left_op);
    return (right_op);
}

Fixed const & Fixed::min(Fixed const & left_op, Fixed const & right_op)
{
    if (left_op < right_op)
        return (left_op);
    return (right_op);
}

Fixed & Fixed::max(Fixed & left_op, Fixed & right_op)
{
    if (left_op > right_op)
        return (left_op);
    return (right_op);
}

Fixed const & Fixed::max(Fixed const & left_op, Fixed const & right_op)
{
    if (left_op > right_op)
        return (left_op);
    return (right_op);
}

bool    Fixed::operator==(Fixed const & right_op)const
{
    return (this->_value == right_op._value);
}

bool    Fixed::operator!=(Fixed const & right_op)const
{
    return (this->_value != right_op._value);
}

bool    Fixed::operator>(Fixed const & right_op)const
{
    return (this->_value > right_op._value);
}

bool    Fixed::operator>=(Fixed const & right_op)const
{
    return (this->_value >= right_op._value);
}

bool    Fixed::operator<(Fixed const & right_op)const
{
    return (this->_value < right_op._value);
}

bool    Fixed::operator<=(Fixed const & right_op)const
{
    return (this->_value <= right_op._value);
}

int Fixed::toInt(void)const
{
    return (this->_value / (1 << this->_bits));
}

float Fixed::toFloat(void)const
{
    return ((float)this->_value / (1 << this->_bits));
}
