/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:55:35 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 20:47:28 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"WrongCat.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<< Wrong Animal >>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    const WrongAnimal* fox = new WrongAnimal();
    const WrongAnimal* n = new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    n->makeSound(); //will output the cat sound!
    fox->makeSound();
    delete n;
    delete fox;
    return 0;
    return 0;
}