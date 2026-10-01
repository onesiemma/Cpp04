/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:41:11 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/13 14:49:06 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
/*
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
 
return 0;
}
*/
int main()
{
    std::cout << "=== Correct Polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();  // Cat sound
    j->makeSound();  // Dog sound
    meta->makeSound(); // Animal sound

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Wrong Polymorphism ===" << std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wc->getType() << " " << std::endl;

    wc->makeSound();
    wmeta->makeSound();

    delete wmeta;
    delete wc;

    return 0;
}
