/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:22:29 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/21 00:30:59 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[1;32mBrain default constructor called\033[0m" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "\033[1;33mBrain copy constructor called\033[0m" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "\033[1;31mBrain destructor called\033[0m"  << std::endl;
}

void    Brain::setIdeas(int Index, const std::string& Idea)
{
    if (Index >= 0 && Index < 100)
        ideas[Index] = Idea;
}

const std::string&    Brain::getIdeas(int Index) const
{
    return (ideas[Index]);
}