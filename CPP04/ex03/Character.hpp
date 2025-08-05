/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:00:28 by modavid           #+#    #+#             */
/*   Updated: 2025/07/16 10:12:22 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : ICharacter
{
    private :

        std::string _name;

    public :
    
        Character(void);
        ~Character(void);
        Character(std::string const name);
        Character(Character const & copy);
        Character & operator=(Character const & right_op);

        std::string const & getName(void)const;
        void                equip(AMateria * m);
        void                unequip(int idx);
        void                use(int idx, ICharacter & target);
};

#endif