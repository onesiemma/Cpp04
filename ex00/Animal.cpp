/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:52:15 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/17 18:54:26 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "copy Animal constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal operator assignment" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << "The Animal made a sound" << std::endl;
}