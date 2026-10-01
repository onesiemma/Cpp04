/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:05:25 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/20 22:47:56 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& other);
    Brain&  operator=(const Brain& other);
    ~Brain();

    const std::string&  getIdeas(int Index) const;
    void                setIdeas(int Index, const std::string& ideas);

};
    
    
#endif