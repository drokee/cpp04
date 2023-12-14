/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:22:57 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/14 11:22:52 by amahdiou         ###   ########.fr       */
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
void MateriaSource::learnMateria(AMateria* take)
{
    if(!take)
        exit(1);
    for (int i = 0; i < 4; i++){
        if (got[i] == NULL)
        {
            got[i] = take->clone();
            return;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(got[i] != NULL)
        {
            if(got[i]->getType() == type)
                return got[i]->clone();
        }
    }
    std::cout << "Unknown Type" << std::endl;
    return NULL;
}
MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        delete got[i];
    }
}