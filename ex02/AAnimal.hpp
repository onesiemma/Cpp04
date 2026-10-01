/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:34:20 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/08 00:44:29 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);
    virtual void    makeSound() const = 0;
    std::string getType() const;
    virtual ~AAnimal();
};

#endif // !AAnimal_HPP
