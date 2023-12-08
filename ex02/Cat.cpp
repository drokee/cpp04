/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:21:28 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/08 13:18:29 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
Cat::Cat()
{
    std::cout << "Default Constractor Cat Called" << std::endl;
    Catbrain = new Brain();
    type = "Cat";
    delete Catbrain;
}
Cat::Cat(const Cat &t)
{
    std::cout << "Copy Constractor Cat Called" << std::endl;
    Catbrain = new Brain();
    *this = t;
    delete Catbrain;
}
Cat & Cat::operator = (const Cat &t)
{
    std::cout << "Copy assignement Cat Called" << std::endl;
    if(&t != this)
    {
        this->type = t.type;
    }
    return *this;
}
Cat::~Cat()
{
    std::cout << "Destructor Cat called!" << std::endl;
}
void   Cat::makeSound()const
{
    std::cout << "HAA" << std::endl;
}
