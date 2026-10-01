/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:41:11 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/13 15:13:40 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "[ Creating AAnimals ]" << std::endl;
    const AAnimal* AAnimals[4];
    AAnimals[0] = new Dog();
    AAnimals[1] = new Cat();
    AAnimals[2] = new Dog();
    AAnimals[3] = new Cat();
    //const AAnimal* a = new AAnimal(); //bad test.

    std::cout << "\n[ Making Sounds ]" << std::endl;
    for (int i = 0; i < 4; i++)
        AAnimals[i]->makeSound();

    std::cout << "\n[ Testing Brain ideas ]" << std::endl;
    Dog d1;
    d1.setIdeas(0, "I want a bone");
    d1.setIdeas(1, "I want to play");

    Dog d2 = d1;
    d2.setIdeas(0, "I want a walk");

    std::cout << "d1 idea 0: " << d1.getIdeas(0) << std::endl;
    std::cout << "d2 idea 0: " << d2.getIdeas(0) << std::endl;
    std::cout << "d1 idea 1: " << d1.getIdeas(1) << std::endl;

    std::cout << "\n[ Testing assignment operator ]" << std::endl;
    Cat c1;
    c1.setIdeas(0, "I want fish");
    Cat c2 = c1;
    
    //c2 = c1; // copy assignment
    c2.setIdeas(0, "I want milk");

    std::cout << "c1 idea 0: " << c1.getIdeas(0) << std::endl;
    std::cout << "c2 idea 0: " << c2.getIdeas(0) << std::endl;

    std::cout << "\n[ Deleting AAnimals ]" << std::endl;
    for (int i = 0; i < 4; i++)
        delete AAnimals[i];

    std::cout << "\n[ End of main ]" << std::endl;
    return 0;
}
