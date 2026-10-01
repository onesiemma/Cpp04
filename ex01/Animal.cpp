/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:52:15 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/21 00:31:06 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "\033[1;32mAnimal default constructor called\033[0m" << std::endl;
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "\033[1;33mAnimal copy constructor called\033[0m" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "\033[1;31mAnimal destructor called\033[0m"  << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << "The Animal made a sound" << std::endl;
}