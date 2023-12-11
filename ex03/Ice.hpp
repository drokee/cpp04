/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:16:05 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/11 15:20:01 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include"AMateria.hpp"
#include "Character.hpp"

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