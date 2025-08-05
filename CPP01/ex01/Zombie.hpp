/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:18:47 by modavid           #+#    #+#             */
/*   Updated: 2025/06/15 03:08:34 by modavid          ###   ########.fr       */
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
        void    setName(std::string name);
        void    Announce(void);
        ~Zombie(void);
};

Zombie  *zombieHorde(int N, std::string name);

#endif