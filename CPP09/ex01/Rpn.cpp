/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounir <mounir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:00:56 by mounir            #+#    #+#             */
/*   Updated: 2025/10/27 17:24:12 by mounir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int    ifNumOrOpe(char c)
{
    if (!std::isdigit(c) && c != '*' && c != '/'
        && c != '+' && c != '-')
        return 1;
    return 0;
}

void    Rpn::check_arg(char **arg)
{
    for (int i = 0; arg[i] != NULL; i++)
    {
        if (arg[i][1] != '\0')
            throw std::out_of_range("Error: bad arguments");
        else if (ifNumOrOpe(arg[i][0]) == 1)
            throw std::out_of_range("Error: bad arguments");
    }
}

void    Rpn::parseRpn(int ac, char **av)
{
    if (ac == 2)
    {
        char **tab = splitToken(av[1]);
        check_arg(tab);
    }
    else
        check_arg(av + 1);
}