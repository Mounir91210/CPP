/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:01:38 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 18:04:25 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include "Dog.hpp"

class WrongAnimal
{
    private :

    protected :

        std::string _type;

    public :
        
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal(WrongAnimal const & copy);
        WrongAnimal & operator=(WrongAnimal const & right_op);

        std::string getType(void)const;
        void        makeSound(void)const;
};

#endif