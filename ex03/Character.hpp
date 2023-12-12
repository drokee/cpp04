/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:51:29 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 15:19:28 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include"ICharacter.hpp"
#include<iostream>

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *arr[4];
        AMateria *arr1[4];
        AMateria *tmp[4];
        // int i ;

        int pos;
        int loc;
    public:
        Character();
        Character(std::string name);
        Character(const Character &t);
        Character &operator = (const Character &t);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};
#endif