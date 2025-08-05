/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:19 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 13:04:06 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Shane");
    ScavTrap scav("Rick");
    scav.guardGate();
    std::string name = "Carl";

    clap.takeDamage(6);
    scav.takeDamage(9);
    for (int i = 0; i < 9; i++){
        scav.beRepaired(1);
    }
    scav.takeDamage(1);
    scav.attack(name);
}