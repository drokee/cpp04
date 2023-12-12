/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:16:05 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 12:02:30 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include"AMateria.hpp"
// #include "Character.hpp"
#include "ICharacter.hpp"
class AMateria;
class Ice : public AMateria{
    public:
    Ice();
    Ice(std::string type);
    Ice(const Ice &t);
    Ice &operator = (const Ice &t);
    AMateria* clone() const;
    ~Ice();
    void use(ICharacter& target);
};
#endif