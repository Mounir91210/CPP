/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 06:24:19 by modavid           #+#    #+#             */
/*   Updated: 2025/07/11 08:48:16 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Rick");
    std::string name = "Carl";

    clap.takeDamage(9); 
    for (int i = 0;  i <= 9; i++){
        clap.beRepaired(1);
    }
    clap.takeDamage(1);
    clap.attack(name);
}