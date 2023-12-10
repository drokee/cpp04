/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:58:23 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/09 11:40:01 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
Animal::Animal()
{
    std::cout << "Default Constractor Animal Called" << std::endl;
    type = "unknown";
}
Animal::Animal(const Animal &t)
{
    std::cout << "Copy Constractor Animal Called" << std::endl;
    *this = t;
}
Animal & Animal::operator=(const Animal &t)
{
    std::cout << "Copy assignement Animal Called" << std::endl;
    if(&t != this)
    {
        this->type = t.type;
    }
    return *this;
}
Animal::~Animal()
{
    std::cout << "Destructor Animal called!" << std::endl;
}
std::string Animal::getType()const
{
    return this->type;
}