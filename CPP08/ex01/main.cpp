/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:31:00 by modavid           #+#    #+#             */
/*   Updated: 2025/09/19 09:10:27 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vect(5);
    
    std::cout << "vect[0] = " << vect[0] << std::endl;
    std::cout << "vect[1] = " << vect[1] << std::endl;
    std::cout << "vect[2] = " << vect[2] << std::endl;

    vect.push_back(0);
    std::cout << "vect[5] = " << vect[5] << std::endl;
    std::cout << "vect[7] = " << vect[7] << std::endl;


}