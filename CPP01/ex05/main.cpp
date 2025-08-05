/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 23:45:37 by modavid           #+#    #+#             */
/*   Updated: 2025/07/04 01:30:28 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl        harley;
    std::string level;

    (void)av;
    if (ac != 1)
        std::cout << "Bad arguments" << std::endl;
    std::cout << "Please choose a level (DEBUG - INFO - WARNING - ERROR)" << std::endl;
    if (!std::getline(std::cin, level))
        return (1);
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
        std::cout << "Please enter a valid message" << std::endl;
    harley.complain(level);
}