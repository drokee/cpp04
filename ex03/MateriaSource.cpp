/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:22:57 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 15:40:40 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    
}
MateriaSource::MateriaSource(const MateriaSource &t)
{
    *this = t;
}
void MateriaSource::learnMateria(AMateria* dyalu)
{
    for (int i = 0; i < 4; i++){
        if (dyali[i] == NULL)
        {
            dyali[i] = dyalu;
            return;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    if(type == "cure")
    {
        return new Cure;
    }
   
    else if(type == "ice")
    {
        return new Ice;
    }
    else
    {
        std::cout << "Unknown type" << std::endl;
        return NULL;
    }

}
MateriaSource::~MateriaSource()
{

}