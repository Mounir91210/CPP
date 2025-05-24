/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:29:29 by modavid           #+#    #+#             */
/*   Updated: 2025/05/23 22:03:02 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                av[i][j] = std::toupper(av[i][j]);
                std::cout << av[i][j];
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}
