/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 23:46:03 by modavid           #+#    #+#             */
/*   Updated: 2025/07/04 01:29:51 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string.h>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"

class Harl
{
    private :
        void    _debug(void);
        void    _info(void);
        void    _warning(void);
        void    _error(void);

    public :
        Harl(void);
        void    complain(std::string level);
        ~Harl(void);
};

#endif