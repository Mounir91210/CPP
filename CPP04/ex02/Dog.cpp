/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:30:21 by modavid           #+#    #+#             */
/*   Updated: 2025/07/14 13:37:05 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
    Brain   *brainz = new Brain();

    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    this->brain = brainz;
    return;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
    return;
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain (*copy.brain);
    return ;
}

Dog & Dog::operator=(Dog const & right_op)
{
    std::cout << "Dog copy assignement called" << std::endl;
    if (this != &right_op)
    {
        delete this->brain;
        this->_type = right_op._type;
        this->brain = new Brain(*right_op.brain);
    }
    return (*this);
}

std::string Dog::getType(void)const
{
    return this->_type;
}

void    Dog::makeSound(void)const
{
    std::cout << "Wouaf" << std::endl;
}
