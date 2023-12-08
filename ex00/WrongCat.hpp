/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:45:37 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 20:33:35 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include"WrongAnimal.hpp"
#include<iostream>
class WrongCat : public  WrongAnimal{
    public:
    WrongCat();
    WrongCat(const WrongCat &t);
    WrongCat &operator = (const WrongCat &t);
    ~WrongCat();
    void    makeSound()const;

};
#endif