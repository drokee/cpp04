/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:58:36 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/08 09:37:25 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{

}
Brain::Brain(const Brain &t)
{
    *this = t;
}
Brain& Brain::operator=(const Brain &t)
{
    if(this != &t)
    {
        *this = t;
    }
    return *this;
}
Brain::~Brain()
{
    
}
