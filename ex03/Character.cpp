/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:02:54 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 15:24:30 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"
Character::Character()
{
    name = "unknown";
    pos = 0;
    for(int i = 0; i < 4 ; i++)
        arr[i] = NULL;
    for(int i = 0; i < 4 ; i++)
        arr1[i] = NULL;
}
Character::Character(std::string name)
{
    this->name = name;
    pos = 0;
    for(int i = 0; i < 4 ; i++)
        arr[i] = NULL;
    for(int i = 0; i < 4 ; i++)
        arr1[i] = NULL;
}
Character::Character(const Character &t)
{
    *this = t;
}
Character &Character::operator = (const Character &t)
{
    this->arr1[0] = t.arr1[0];
    // if(this != &t)
    // {
    //     *this = ;
    // }
    return *this;
}
std::string const & Character::getName() const
{
    return this->name;
}
void Character::equip(AMateria* m)
{
    if(arr[pos] == NULL && pos < 4)
    {
        arr[pos] = m->clone();
        pos++;
        return;
    }
    for(int i = 0; i < 4 ;i++)
    {
        if(arr1[i] != NULL)
        {
            delete arr1[i];
            arr1[i] = NULL;
        }
    }
    arr1[loc] = m->clone();
        loc++;
}
void Character::unequip(int idx)
{
    if(idx > 0 && idx < 4)
    {
        tmp[idx] = arr[idx];
        arr[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter& target)
{
    this->arr[idx]->use(target);
}
Character::~Character()
{
}