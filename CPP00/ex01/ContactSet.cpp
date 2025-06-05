/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactSet.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 20:47:45 by modavid           #+#    #+#             */
/*   Updated: 2025/06/01 18:21:44 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void    Contact::Setfirst_Name(std::string str)
{
    this->_first_name = str;
    return;
}

void    Contact::Setlast_Name(std::string str)
{
    this->_last_name = str;
    return;
}

void    Contact::Setnick_Name(std::string str)
{
    this->_nick_name = str;
    return;
}

void    Contact::Setphone_Num(std::string str)
{
    this->_phone_num = str;
    return;
}

void    Contact::Setdark_Secret(std::string str)
{
    this->_dark_secret = str;
    return;
}

void    Contact::Set_index(int i)
{
    this->index = i + 1;
    return;
}
