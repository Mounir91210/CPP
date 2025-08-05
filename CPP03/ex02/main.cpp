/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:19 by modavid           #+#    #+#             */
/*   Updated: 2025/07/12 13:17:34 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Shane");
    ScavTrap scav("Rick");
    FragTrap frag("Negan");
    std::string name = "Carl";
    
    clap.takeDamage(3);
    scav.guardGate();
    scav.takeDamage(100);
    for (int i = 0; i < 9; i++){
        scav.beRepaired(1);
    }
    frag.takeDamage(1);
    scav.attack(name);
    frag.highFivesGuys();
}