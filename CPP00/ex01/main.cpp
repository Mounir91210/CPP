/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:10:30 by modavid           #+#    #+#             */
/*   Updated: 2025/06/06 00:33:08 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


int main()
{
    PhoneBook   reper;
    Contact     contact;
    std::string tmp;
    int         i;

    i = 0;
    reper.count = 0;
    while (1)
    {
        std::cout << "Please enter a command (ADD - SEARCH - EXIT)" << std::endl;
        std::cin >> tmp;
        if (!std::cin)
            return (1);
        if (tmp == "ADD")
            reper.Add_Contact(&i);
        else if (tmp == "SEARCH")
            reper.Search_Contact(&i);
        else if (tmp == "EXIT")
            exit(0);
        else
            std::cout << std::endl << "Wrong command" << std::endl << std::endl;
    }
    return (0);
}
