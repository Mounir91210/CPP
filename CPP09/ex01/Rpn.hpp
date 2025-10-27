/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounir <mounir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:07:13 by modavid           #+#    #+#             */
/*   Updated: 2025/10/27 17:10:36 by mounir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
#define RPN_H

#include <string>
#include <cctype>
#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include <cmath>
#include <limits>
#include <climits>
#include <stdint.h>
#include <vector>
#include <stack>

class Rpn
{
    private :

        std::stack<int> stack;
    
    public :

        Rpn(void);
        ~Rpn(void);
        Rpn(Rpn const & copy);
        Rpn & operator=(Rpn const & right_op);

        void    parseRpn(int ac, char **av);
        void    check_arg(char **arg)
};

#endif