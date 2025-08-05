/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 04:28:01 by modavid           #+#    #+#             */
/*   Updated: 2025/06/17 23:03:11 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string adress = " << &string << std::endl;
    std::cout << "stringPTR adress = " << &stringPTR << std::endl;
    std::cout << "stringREF adress = " << &stringREF << std::endl << std::endl;

    std::cout << "string value = " << string << std::endl;
    std::cout << "stringPTR value = " << stringPTR << std::endl;
    std::cout << "stringREF value = " << stringREF << std::endl;
    return (0);
}
