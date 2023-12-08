/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:34:16 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/07 10:40:57 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include"Animal.hpp"
#include"Brain.hpp"
#include<iostream>
class Dog : public  Animal{
    private:
        Brain* Dogbrain;
    public:
        Dog();
        Dog(const Dog &t);
        Dog &operator = (const Dog &t);
        ~Dog();
        void    makeSound() const;
};
#endif