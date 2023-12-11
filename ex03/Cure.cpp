/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:13:22 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/11 15:20:37 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"
Cure::Cure()
{
    type = "cure";
}
Cure::Cure(std::string type)
{
    this->type = type;
}
Cure::Cure(const Cure &t)
{
    this->type = t.type;
}
Cure &Cure::operator = (const Cure &t)
{
    if(this != &t)
        this->type = t.type;
    return *this;
}
AMateria* Cure::clone() const{
    return new Cure;
}
void Cure::use(ICharacter& target)
{
    std::cout << "Cure : * heals " << target.getName() << "'s wounds *" <<std::endl;
}
Cure::~Cure()
{

}