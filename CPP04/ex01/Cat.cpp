/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:25:05 by modavid           #+#    #+#             */
/*   Updated: 2025/07/14 13:39:40 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
    Brain   *brainz = new Brain();

    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->brain = brainz;
    return;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
    return;
}

Cat::Cat(Cat const & copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*copy.brain);
    return ;
}

Cat & Cat::operator=(Cat const & right_op)
{
    std::cout << "Cat copy assignement called" << std::endl;
    if (this != &right_op)
    {
        delete this->brain;
        this->_type = right_op._type;
        this->brain = new Brain(*right_op.brain);
    }
    return (*this);
}

std::string Cat::getType(void)const
{
    return this->_type;
}

void    Cat::makeSound(void)const
{
    std::cout << "Miaouw" << std::endl;
}
