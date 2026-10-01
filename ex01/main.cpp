/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:41:11 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/13 15:01:23 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "[ Creating Animals ]" << std::endl;
    const Animal* animals[4];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    std::cout << "\n[ Making Sounds ]" << std::endl;
    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();

    std::cout << "\n[ Testing Brain ideas ]" << std::endl;
    Dog d1;
    d1.setIdeas(0, "I want a bone");
    d1.setIdeas(1, "I want to play");

    Dog d2 = d1;
    d2.setIdeas(0, "I want to walk");

    std::cout << "d1 idea 0: " << d1.getIdeas(0) << std::endl;
    std::cout << "d2 idea 0: " << d2.getIdeas(0) << std::endl;
    std::cout << "d1 idea 1: " << d1.getIdeas(1) << std::endl;

    std::cout << "\n[ Testing assignment operator ]" << std::endl;
    Cat c1;
    c1.setIdeas(0, "I want fish");
    Cat c2 = c1;
    
    c2.setIdeas(0, "I want milk");
    std::cout << "c1 idea 0: " << c1.getIdeas(0) << std::endl;
    std::cout << "c2 idea 0: " << c2.getIdeas(0) << std::endl;
    std::cout << "\n[ Deleting Animals ]" << std::endl;
    
    for (int i = 0; i < 4; i++)
        delete animals[i];

    std::cout << "\n[ End of main ]" << std::endl;
    return 0;
}
