/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:53:32 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/07 17:27:09 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include<iostream>
class Brain{
    protected:
    std::string ideas[100];
    public:
    Brain();
    Brain(const Brain &t);
    Brain &operator = (const Brain &t);
    ~Brain();
};
#endif