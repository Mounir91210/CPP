/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:50:24 by modavid           #+#    #+#             */
/*   Updated: 2025/07/16 09:51:38 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :

        Ice(void);
        ~Ice(void);
        Ice(std::string const & type);
        Ice(Ice const & copy);
        Ice & operator=(Ice const & copy);
        
        std::string const & getType(void)const;
        Ice *               clone(void)const;
        void                use(ICharacter & target);
};

#endif