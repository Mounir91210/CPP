/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 02:09:35 by modavid           #+#    #+#             */
/*   Updated: 2025/06/14 19:28:55 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

class Zombie
{
    private:
        std::string _name;
    
    public:
        Zombie(void);
        void    Announce(void);
        void    setName(std::string name);
        ~Zombie(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif