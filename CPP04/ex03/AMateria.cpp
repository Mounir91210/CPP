/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:35:53 by modavid           #+#    #+#             */
/*   Updated: 2025/07/16 09:59:15 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    return ;
}

AMateria::~AMateria(void)
{
    return ;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
    return ;
}

AMateria::AMateria(AMateria const & copy)
{
    this->_type = copy._type;
    return ;
}

AMateria & AMateria::operator=(AMateria const & right_op)
{
    if (this != &right_op)
        this->_type = right_op._type;
    return (*this);
}

std::string const & AMateria::getType(void)const
{
    return (this->_type);    
}
