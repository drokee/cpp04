/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:24:55 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 15:46:10 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include"AMateria.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
#include<iostream>
#include"IMateriaSource.hpp"

class  MateriaSource : public IMateriaSource{
    private :
        AMateria *dyali[4];
        int index;
    public:
    MateriaSource();
    MateriaSource(const MateriaSource &t);
    ~MateriaSource();
    void learnMateria(AMateria* dyalu);
    AMateria* createMateria(std::string const & type);
};

#endif