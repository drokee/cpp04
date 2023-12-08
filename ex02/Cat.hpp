/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:21:45 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/07 10:40:03 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include"Animal.hpp"
#include"Brain.hpp"
#include<iostream>
class Cat : public  Animal{
    private:
        Brain* Catbrain;
    public:
        Cat();
        Cat(const Cat &t);
        Cat &operator = (const Cat &t);
        ~Cat();
        void    makeSound()const;

};
#endif