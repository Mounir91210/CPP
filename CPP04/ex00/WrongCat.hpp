/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:05:20 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 18:07:34 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private :

    public :
        
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(WrongCat const & copy);
        WrongCat & operator=(WrongCat const & right_op);

        std::string getType(void)const;
        void        makeSound(void)const;
};

#endif