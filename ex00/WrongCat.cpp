/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:46:35 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 20:36:16 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"
WrongCat::WrongCat()
{
   std::cout << "Default Constractor Cat Called" << std::endl;
    type = "Cat";   
}
WrongCat::WrongCat(const WrongCat &t)
{
    std::cout << "Copy Constractor Cat Called" << std::endl;
    *this = t;
}
WrongCat & WrongCat::operator = (const WrongCat &t)
{
    std::cout << "Copy assignement Cat Called" << std::endl;
    if(&t != this)
    {
        this->type = t.type;
    }
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "Destructor Cat called!" << std::endl;
}
void   WrongCat::makeSound()const
{
    std::cout << "MAAAAW" << std::endl;
}