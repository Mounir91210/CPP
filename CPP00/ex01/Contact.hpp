/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 20:29:51 by modavid           #+#    #+#             */
/*   Updated: 2025/06/01 17:30:27 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "PhoneBook.hpp"
#include <iostream>

class Contact
{
    private :
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_num;
        std::string _dark_secret;
        int         index;

    public :
        Contact(void);
        void        Setfirst_Name(std::string str);
        void        Setlast_Name(std::string str);
        void        Setnick_Name(std::string str);
        void        Setphone_Num(std::string str);
        void        Setdark_Secret(std::string str);
        void        Set_index(int i);
        std::string Getfirst_Name(void);
        std::string Getlast_Name(void);
        std::string Getnick_Name(void);
        std::string Getphone_Num(void);
        std::string Getdark_Secret(void);
        int         Get_index(void);
        ~Contact(void);
};
