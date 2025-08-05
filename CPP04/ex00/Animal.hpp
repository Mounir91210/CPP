/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:04:03 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 17:53:24 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

class Animal
{
    private :

    protected :

        std::string _type;
    
    public :
        
        Animal(void);
        virtual ~Animal(void);
        Animal(Animal const & copy);
        Animal & operator=(Animal const & right_op);

        std::string getType(void)const;
        virtual void        makeSound(void)const;
};


#endif