/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 04:54:00 by modavid           #+#    #+#             */
/*   Updated: 2025/06/26 16:51:07 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;

    public:
        HumanA(std::string name, Weapon &weaponA);
        void    attack();
        ~HumanA(void);
};

#endif