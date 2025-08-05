/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:29:23 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 16:17:37 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H
# define Dog_H

#include "Cat.hpp"

class Dog : public Animal
{
    private :

    public :

        Dog(void);
        ~Dog(void);
        Dog(Dog const & copy);
        Dog & operator=(Dog const & right_op);

        std::string getType(void)const;
        void        makeSound(void)const;
};

#endif