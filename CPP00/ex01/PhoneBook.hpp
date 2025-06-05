/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:45:07 by modavid           #+#    #+#             */
/*   Updated: 2025/06/01 17:54:49 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "Contact.hpp"
#include "stdlib.h"
#include "stdio.h"

class   PhoneBook
{
    private:
        Contact rep[8];

    public:
        PhoneBook(void);
        void    Add_Contact(int *i);
        void    Search_Contact(int *i);
        int     count;
        ~PhoneBook(void);
};

#endif
