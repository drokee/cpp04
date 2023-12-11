/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:38:09 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/11 15:20:52 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
AMateria::AMateria()
{
    type = "UNKNOWN";
}
AMateria::AMateria(std::string const &type)
{
    this->type = type;
}
AMateria::AMateria(AMateria &t)
{
    this->type = t.type;
}
AMateria &AMateria::operator=(const AMateria &t)
{
    this->type = t.type;
    return *this;
}
void    AMateria::use(ICharacter __unused &target)
{
    std::cout << "AMateria use Called" << std::endl; 
}
std::string const & AMateria::getType() const
{
    return type;
}