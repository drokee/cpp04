/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:38:09 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/10 14:15:25 by amahdiou         ###   ########.fr       */
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
    this = t;
}
AMateria &AMateria::operator=(const AMateria &t)
{
    this->type = t.type;
    return *this;
}
std::string AMateria::const & getType() const
{
    return type;
}