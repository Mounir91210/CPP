/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:19 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 13:54:31 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap clap("Shane");
    ScavTrap scav("Rick");
    FragTrap frag("Negan");
    DiamondTrap diamond("Daryl");
    std::string name = "Carl";

    diamond.whoAmI();
    clap.takeDamage(3);
    scav.guardGate();
    scav.takeDamage(100);
    for (int i = 0; i < 9; i++){
        scav.beRepaired(1);
    }
    frag.takeDamage(1);
    scav.attack(name);
    frag.highFivesGuys();
    
//     DiamondTrap diamond("Daryl");
    
//     diamond.whoAmI();
//     diamond.attack("Carl");
}