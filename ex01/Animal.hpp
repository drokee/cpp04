/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:58:13 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 14:56:38 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include<iostream>
class Animal{
    protected:
        std::string type;
    public:
    Animal();
    Animal(const Animal &t);
    Animal &operator=(const Animal &t);
    virtual ~Animal();
    std::string getType()const;
    virtual void    makeSound() const;
};
#endif