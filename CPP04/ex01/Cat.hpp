/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:25:20 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 19:53:54 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Brain;

class Cat : public Animal
{
    private :

        Brain *brain;

    public :

        Cat(void);
        ~Cat(void);
        Cat(Cat const & copy);
        Cat & operator=(Cat const & right_op);

        std::string getType(void)const;
        void        makeSound(void)const;
};

#endif