/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 20:12:57 by modavid           #+#    #+#             */
/*   Updated: 2025/06/06 00:53:53 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "This is constructor" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void) 
{
    std::cout << "This is destructor" << std::endl;
    return;
}

int    check_space(std::string str)
{
    int i;

    i = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\v' || str[i] == '\t'))
        i++;
    if (str[i] == '\0' || str[i] == '\n')
        return (1);
    return (0);
}

void    PhoneBook::Add_Contact(int *i)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    if (*i == 8)
    *i = 0;
    std::cout << std::endl;
    std::cout << "What is your first name : ";
    std::cin >> first_name;
    this->rep[*i].Setfirst_Name(first_name);
    std::cout << "What is your last name : ";
    std::cin >> last_name;
    this->rep[*i].Setlast_Name(last_name);
    std::cout << "What is your nickname : ";
    std::cin >> nick_name;
    this->rep[*i].Setnick_Name(nick_name);
    std::cout << "What is your phone number : ";
    std::cin >> phone_number;
    this->rep[*i].Setphone_Num(phone_number);
    std::cout << "What is your darkest secret : ";
    std::cin >> darkest_secret;
    std::cout << std::endl;
    this->rep[*i].Setdark_Secret(darkest_secret);
    this->rep[*i].Set_index(*i);
    (*i)++;
    if (this->count <= 7)
        this->count++;
}

void    PhoneBook::Search_Contact(int *i)
{
    int         num_contact;
    std::string tmp;
    
    std::cout << "i = " << *i << std::endl;
    if (*i == 0)
    {
        std::cout << std::endl << "No contact saved" << std::endl;
        return ;
    }
    for (int j = 1; j <= this->count; j++)
    {
        std::cout << std::endl << this->rep[j - 1].Get_index() << " | ";
        std::cout << this->rep[j - 1].Getfirst_Name() << " | ";
        std::cout << this->rep[j - 1].Getlast_Name() << " | ";
        std::cout << this->rep[j - 1].Getnick_Name() << std::endl << std::endl;
    }
    std::cout << "Please enter the contact's number" << std::endl;
    std::cin >> tmp;
    num_contact = atoi(tmp.c_str());
    if (num_contact > 8 || num_contact < 1)
        std::cout << std::endl << "Wrong number" << std::endl << std::endl;
    else
    {
        if (num_contact > *i)
            std::cout << std::endl << "Contact's number don't exit" << std::endl << std::endl;
        else
        {
            std::cout << std::endl << "The informations of number " << num_contact << " are :" << std::endl;
            std::cout << "First name = " << this->rep[num_contact - 1].Getfirst_Name() << std::endl;
            std::cout << "Last name = " << this->rep[num_contact - 1].Getlast_Name() << std::endl;
            std::cout << "Nick name = " << this->rep[num_contact - 1].Getnick_Name() << std::endl;
            std::cout << "Phone number = " << this->rep[num_contact - 1].Getphone_Num() << std::endl;
            std::cout << "Darkest secret = " << this->rep[num_contact - 1].Getdark_Secret() << std::endl << std::endl;
        }
    }
}
