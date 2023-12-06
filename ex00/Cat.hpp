/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:21:45 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 14:34:49 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include"Animal.hpp"
#include<iostream>
class Cat : public  Animal{
    public:
    Cat();
    Cat(const Cat &t);
    Cat &operator = (const Cat &t);
    ~Cat();
    void    makeSound()const;

};
#endif