/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:51:00 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 20:34:12 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include<iostream>
class WrongAnimal{
    protected:
        std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &t);
    WrongAnimal &operator=(const WrongAnimal &t);
    virtual ~WrongAnimal();
    std::string getType()const;
    void    makeSound() const;
};
#endif