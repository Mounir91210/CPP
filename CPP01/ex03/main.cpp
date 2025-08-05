/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 04:53:13 by modavid           #+#    #+#             */
/*   Updated: 2025/07/02 00:17:32 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon  club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        std::cout << std::endl;
        club.setType("some other type of club");
        bob.attack();
        std::cout << std::endl;
    }

    {        
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(&club);
        jim.attack();
        std::cout << std::endl;
        club.setType("some other type of club");
        jim.attack();
        std::cout << std::endl;
    }
    return (0);
}