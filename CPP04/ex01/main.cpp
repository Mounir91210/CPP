/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:31:21 by modavid           #+#    #+#             */
/*   Updated: 2025/07/14 13:41:16 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();
    
    // delete meta;
    // delete j;
    // delete i;

    Animal *anim[10];
    
    for (int i = 0; i < 10; i++)
    {
        if (i <= 4)
        {
            anim[i] = new Dog;
            std::cout << "number i = " << i << std::endl;
        }
        else
        {
            anim[i] = new Cat; 
            std::cout << "number i = " << i << std::endl;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        delete anim[i];
    }

    Dog dog;
    Dog dog2;
    Dog dog3(dog);
    dog3 = dog2;
    std::cout << dog3.getType() << std::endl;
    
    return 0;
}