/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 04:53:46 by modavid           #+#    #+#             */
/*   Updated: 2025/06/26 16:53:26 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include "Weapon.hpp"


class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanB(std::string name);
        void    setWeapon(Weapon *weapon);
        void    attack(void);
        ~HumanB(void);
};


#endif