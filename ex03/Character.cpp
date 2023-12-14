/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:02:54 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/14 14:50:27 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"
Character::Character()
{
    name = "unknown";
    pos = 0;
    for(int i = 0; i < 4 ; i++)
        arr[i] = NULL;
    // for(int i = 0; i < 4 ; i++)
    //     arr1[i] = NULL;
}
Character::Character(std::string name)
{
    this->name = name;
    pos = 0;
    for(int i = 0; i < 4 ; i++)
        arr[i] = NULL;
    // for(int i = 0; i < 4 ; i++)
    //     arr1[i] = NULL;
}
Character::Character(const Character &t)
{
    this->name = t.name;
    for(int i = 0; i < 4 ; i++)
    {
        this->arr[i] = t.arr[i]->clone();
    }
}
Character &Character::operator = (const Character &t)
{
    if(this != &t)
    {
        this->name = t.name;
        
        for(int i = 0; i  < 4 ; i++)
        {
            if(this->arr[i] != NULL)
                delete this->arr[i];
            if (t.arr[i] !=  NULL) {
                this->arr[i] = t.arr[i]->clone();
            }
            else{
                this->arr[i] = NULL;
            }
        }
    }
    return *this;
}
std::string const & Character::getName() const
{
    return this->name;
}
void Character::equip(AMateria* m)
{
    if(!m)
        return ;
    if(arr[pos] == NULL && pos < 4)
    {
        arr[pos] = m->clone();
        pos++;
    }
}
void Character::unequip(int idx)
{
    if(idx > 0 && idx < 4)
    {
        pos = idx;
        tmp[idx] = arr[idx];
        arr[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter& target)
{
    if(arr[idx])
        this->arr[idx]->use(target);
}
Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        delete arr[i];
        delete tmp[i];
    }
}