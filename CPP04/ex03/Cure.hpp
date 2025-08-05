/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:45:32 by modavid           #+#    #+#             */
/*   Updated: 2025/07/16 09:51:23 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "Ice.hpp"

class Cure : public AMateria
{
    public :

        Cure(void);
        ~Cure(void);
        Cure(std::string const & type);
        Cure(Cure const & copy);
        Cure & operator=(Cure const & copy);
        
        std::string const & getType(void)const;
        Cure *               clone(void)const;
        void                use(ICharacter & target);
};

#endif