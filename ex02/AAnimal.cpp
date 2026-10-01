/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:52:15 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/21 14:23:29 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "\033[1;32mAAnimal default constructor called\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    *this = other;
    std::cout << "\033[1;33mAAnimal copy constructor called\033[0m" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "\033[1;31mAAnimal destructor called\033[0m"  << std::endl;
}

std::string AAnimal::getType() const
{
    return (type);
}

// void    AAnimal::makeSound() const
// {
//     std::cout << "The AAnimal made a sound" << std::endl;
// }