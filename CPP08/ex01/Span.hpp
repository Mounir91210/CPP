/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounir <mounir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:07:13 by modavid           #+#    #+#             */
/*   Updated: 2025/09/22 15:35:01 by mounir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

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

class Span
{
    private:
    
        std::vector<int> _tab;
        unsigned int     _size;
    
    public:
    
        Span(void);
        Span(unsigned int N);
        Span(Span const & copy);
        Span & operator=(Span const & right_op);
        ~Span(void);

        void    addNumber(unsigned int number);
        void    addMultipleNumber(unsigned int number);
        void    shortestSpan();
        void    largestSpan();
};

#endif