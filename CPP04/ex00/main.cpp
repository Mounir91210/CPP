/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:31:21 by modavid           #+#    #+#             */
/*   Updated: 2025/07/13 18:10:20 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wongcat = new WrongCat();

    std::cout << wongcat->getType() << " " << std::endl;
    wongcat->makeSound();
    wrong->makeSound();

    delete wrong;
    delete wongcat;
    
    return 0;
}