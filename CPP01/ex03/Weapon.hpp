/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 04:52:12 by modavid           #+#    #+#             */
/*   Updated: 2025/06/15 18:41:41 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        std::string getType(void) const;
        void        setType(std::string type);
        ~Weapon(void);
};

#endif