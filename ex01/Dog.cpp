/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:14:30 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/21 00:28:32 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "\033[1;32mDog default constructor called\033[0m" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "\033[1;33mDog copy constructor called\033[0m" << std::endl;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "\033[1;31mCat destructor called\033[0m"  << std::endl;
    delete  brain;
}

void    Dog::makeSound() const
{
    std::cout << "The Dog said woupwoup !🐶🐶🐶" << std::endl;
}

void    Dog::setIdeas(int Index, const std::string& idea)
{
    brain->setIdeas(Index, idea);
}

const std::string&  Dog::getIdeas(int Index) const
{
    return (brain->getIdeas(Index));
}