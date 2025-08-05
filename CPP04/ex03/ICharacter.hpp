/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:36:34 by modavid           #+#    #+#             */
/*   Updated: 2025/07/16 08:45:22 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

#include "AMateria.hpp"

class ICharacter
{
    public :

        virtual ~ICharacter(void) {}
        virtual std::string const & getName(void) = 0;
        virtual void                equip(AMateria * m) = 0;
        virtual void                unequip(int idx) = 0;
        virtual void                use(int idx, ICharacter & target) = 0;
};

#endif