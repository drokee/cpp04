/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:22:41 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/10 15:32:47 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice()
{
    type = "UNKNOWN";
}
Ice::Ice(std::string type)
{
    this->type = type;
}
Ice::Ice(const Ice &t)
{
    this->type = t.type;
}
Ice &Ice::operator = (const Ice &t)
{
    if(this != &t)
    {
        delete t;
        
    }
    return *this;
}
AMateria* Ice::clone() const{
    return new Ice;
}
Ice::~Ice(){

}