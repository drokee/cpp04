/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:55:35 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/08 11:43:16 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;

    delete i;
    delete j;//should not create a leak
    system("leaks Animal");
    return 0;
}