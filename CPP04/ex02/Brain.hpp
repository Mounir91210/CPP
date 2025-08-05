/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:14:32 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 19:47:12 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include "Dog.hpp"

class Brain
{
    private :

    protected :
        
        std::string ideas[100];

    public :

        Brain(void);
        ~Brain(void);
        Brain(Brain const & copy);
        Brain & operator=(Brain const & right_op);
};

#endif