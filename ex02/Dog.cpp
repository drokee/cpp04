/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:15:00 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/08 13:20:01 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
Dog::Dog()
{
   std::cout << "Default Constractor Dog Called" << std::endl;
   Dogbrain = new Brain();
    type = "Dog";
    delete Dogbrain;
}
Dog::Dog(const Dog &t)
{
    std::cout << "Copy Constractor Dog Called" << std::endl;
    Dogbrain = new Brain();
    Dogbrain = t.Dogbrain;
    this->type = t.type;
    delete Dogbrain;
}
Dog & Dog::operator = (const Dog &t)
{
    std::cout << "Copy assignement Dog Called" << std::endl;
    if(&t != this)
    {
        this->type = t.type;
    }
    return *this;
}
Dog::~Dog()
{
    std::cout << "Destructor Dog called!" << std::endl;
}
void   Dog::makeSound()const
{
    std::cout << "HAAAW" << std::endl;
}