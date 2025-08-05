/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:19:15 by modavid           #+#    #+#             */
/*   Updated: 2025/07/02 00:11:58 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zombar;

    zombar = zombieHorde(5, "Carl");
    for (int i = 0; i < 5; i++)
        zombar[i].Announce();
    delete [] zombar;
    return (0);
}