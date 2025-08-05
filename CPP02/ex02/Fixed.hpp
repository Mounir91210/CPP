/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:25 by modavid           #+#    #+#             */
/*   Updated: 2025/07/11 06:50:36 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include <cmath>

class Fixed
{
    private :

        int                 _value;
        static int const    _bits = 8;
    
    public :

        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const & copy);
        Fixed & operator=(Fixed const & right_op);
        Fixed(const int i);
        Fixed(const float f);

        Fixed   operator+(Fixed const & right_op) const;
        Fixed   operator-(Fixed const & right_op) const;
        Fixed   operator*(Fixed const & right_op) const;
        Fixed   operator/(Fixed const & right_op) const;
        Fixed & operator++();
        Fixed   operator++(int);
        Fixed & operator--();
        Fixed   operator--(int);
        bool    operator==(Fixed const & right_op) const;
        bool    operator!=(Fixed const & right_op) const;
        bool    operator>(Fixed const & right_op) const;
        bool    operator>=(Fixed const & right_op) const;
        bool    operator<(Fixed const & right_op) const;
        bool    operator<=(Fixed const & right_op) const;
        float   toFloat(void)const;
        int     toInt(void)const;
        static Fixed &          min(Fixed & left_op, Fixed & right_op);
        static const Fixed &    min(Fixed const & left_op, Fixed const & right_op);
        static Fixed &          max(Fixed & left_op, Fixed & right_op);
        static const Fixed &    max(Fixed const & left_op, Fixed const & right_op);
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif