/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 02:08:47 by modavid           #+#    #+#             */
/*   Updated: 2025/06/14 19:28:23 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie* newZombie(std::string name);
 
int main()
{
    Zombie  *zombarp;

    randomChump("Rick");
    zombarp = newZombie("Carl");
    zombarp->Announce();
    delete zombarp;
    return (0);
}
