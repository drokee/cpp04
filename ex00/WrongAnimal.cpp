/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:48:07 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 20:35:13 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Constractor Animal Called" << std::endl;
    type = "unknown";
}
WrongAnimal::WrongAnimal(const WrongAnimal &t)
{
    std::cout << "Copy Constractor Animal Called" << std::endl;
    *this = t;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &t)
{
    std::cout << "Copy assignement Animal Called" << std::endl;
    if(&t != this)
    {
        this->type = t.type;
    }
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor Animal called!" << std::endl;
}
std::string WrongAnimal::getType()const
{
    return this->type;
}
void WrongAnimal::makeSound()const
{
    std::cout << "Animal" << std::endl;
}