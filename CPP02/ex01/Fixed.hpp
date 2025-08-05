/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:25 by modavid           #+#    #+#             */
/*   Updated: 2025/07/10 08:43:35 by modavid          ###   ########.fr       */
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
        int     getIvalue(void)const;
        int     getFvalue(void)const;
        float   toFloat(void)const;
        int     toInt(void)const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif