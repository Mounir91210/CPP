/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:32:01 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 19:52:03 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
    return;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
    return;
}

Brain::Brain(Brain const & copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Brain & Brain::operator=(Brain const & right_op)
{
    std::cout << "Brain copy assignement called" << std::endl;
    if (this != &right_op)
    {
        for (int i = 0; i < 100; i++)   
            this->ideas[i] = right_op.ideas[i];
    }
    return (*this);
}
