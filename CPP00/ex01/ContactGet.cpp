/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactGet.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:22:01 by modavid           #+#    #+#             */
/*   Updated: 2025/06/01 17:31:05 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::Getfirst_Name(void)
{
    return this->_first_name;
}

std::string Contact::Getlast_Name(void)
{
    return this->_last_name;
}

std::string Contact::Getnick_Name(void)
{
    return this->_nick_name;
}

std::string Contact::Getphone_Num(void)
{
    return this->_phone_num;
}

std::string Contact::Getdark_Secret(void)
{
    return this->_dark_secret;
}

int Contact::Get_index(void)
{
    return this->index;
}
