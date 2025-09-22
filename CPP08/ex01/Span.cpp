/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounir <mounir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:47:58 by modavid           #+#    #+#             */
/*   Updated: 2025/09/22 15:38:40 by mounir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0)
{
    this->_tab.reserve(0);
    return ;
}

Span::Span(unsigned int N) : _size(N)
{
    this->_tab.reserve(N);
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
    try
    {
        this->_tab.push_back(number);
        if (this->_tab.size() > this->_size)
            throw std::out_of_range("too numbers");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
