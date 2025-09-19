/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:07:13 by modavid           #+#    #+#             */
/*   Updated: 2025/09/19 07:35:56 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <string>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include <cmath>
#include <limits>
#include <climits>
#include <stdint.h>
#include <vector>

template< typename T >
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it;
    for (it = container.begin(); it != container.end(); it++)
    {
        if (*it == value)
            return it;
    }
    throw std::out_of_range("Value doesn't exist");
}

#endif