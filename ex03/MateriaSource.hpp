/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:55 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/14 09:14:27 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include"Cure.hpp"
#include"Ice.hpp"
class IMateriaSource;

class  MateriaSource : public IMateriaSource{
    private :
        AMateria *got[4];
    public:
    MateriaSource();
    MateriaSource(const MateriaSource &t);
    ~MateriaSource();
    void learnMateria(AMateria* take);
    AMateria* createMateria(std::string const & type);
};

#endif