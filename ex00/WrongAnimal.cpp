/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:32:40 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/17 18:33:46 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Default constructor for class WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "copy constructor for class WrongAnimal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal operator assignment" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal made a generic sound" << std::endl;
}