/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:31:00 by modavid           #+#    #+#             */
/*   Updated: 2025/09/19 07:36:09 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(0);
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);

    try 
    {
        std::vector<int>::iterator res = easyfind(v, 12);
        std::cout << "Occurrence = " << *res << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}