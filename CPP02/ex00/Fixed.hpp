/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 08:44:28 by modavid           #+#    #+#             */
/*   Updated: 2025/07/07 11:09:21 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

class Fixed
{
    private :
        int                 _value;
        static const int    _bits;
    
    public :
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const & copy);
        Fixed & operator=(Fixed const & copy);
        int     getRawBits(void)const;
        void    setRawBits(int const raw);
};

#endif