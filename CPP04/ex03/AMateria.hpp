/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:24:40 by modavid           #+#    #+#             */
/*   Updated: 2025/07/16 08:55:00 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETARIA_H
# define AMETARIA_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

class ICharacter;

class AMateria
{
    protected :

        std::string _type;

    public :

        AMateria(void);
        ~AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria const & copy);
        AMateria & operator=(AMateria const & right_op);
        
        std::string const & getType(void)const;
        virtual AMateria *  clone(void)const = 0;
        virtual void        use(ICharacter & target);
};

#endif