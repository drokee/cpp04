/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:22:41 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/11 15:33:13 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice()
{
    type = "ice";
}
Ice::Ice(std::string type)
{
    this->type = type;
}
Ice::Ice(const Ice &t) : AMateria()
{
    *this = t;
}
Ice &Ice::operator = (const Ice &t)
{
      if(this != &t)
        this->type = t.type;
    return *this;
}
AMateria* Ice::clone() const
{
    return new Ice();
}
void Ice::use(ICharacter& target)
{
    std::cout << "Ice : * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
Ice::~Ice(){

}