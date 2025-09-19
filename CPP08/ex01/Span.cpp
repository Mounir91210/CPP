/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:47:58 by modavid           #+#    #+#             */
/*   Updated: 2025/09/19 09:05:30 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
    return ;
}

Span::Span(unsigned int N)
{
    this->_tab = std::vector<int>(N);
    this->_count = 0;
    return ;
}

Span::~Span(void)
{
    return ;
}

Span::Span(Span const & copy)
{
    *this = copy;
    return;
}

Span & Span::operator=(Span const & right_op)
{
    if (this != &right_op)
        this->_tab = right_op._tab;
    return *this;
}

void    Span::addNumber(unsigned int number)
{
    if (this->_count == )
    for (std::vector<int>::iterator it = this->_tab.begin(); it != this->_tab.end(); it++)
    {
        
    }
}
