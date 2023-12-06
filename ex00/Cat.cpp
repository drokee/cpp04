/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:21:28 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 14:35:28 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
Cat::Cat()
{
   std::cout << "Default Constractor Cat Called" << std::endl;
    type = "Cat";   
}
Cat::Cat(const Cat &t)
{
    std::cout << "Copy Constractor Cat Called" << std::endl;
    *this = t;
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
    std::cout << "MAAAAW" << std::endl;
}
