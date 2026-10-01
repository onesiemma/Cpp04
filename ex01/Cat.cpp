/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:36:25 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/21 00:30:51 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "\033[1;32mCat default constructor called\033[0m" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "\033[1;33mCat copy constructor called\033[0m" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "\033[1;31mCat destructor called\033[0m"  << std::endl;
    delete  brain;
}

void    Cat::makeSound() const
{
    std::cout << "The Cat said miaouh !🐱🐱🐱" << std::endl;
}

void    Cat::setIdeas(int Index, const std::string& idea)
{
    brain->setIdeas(Index, idea);
}

const std::string&  Cat::getIdeas(int Index) const
{
    return (brain->getIdeas(Index));
}