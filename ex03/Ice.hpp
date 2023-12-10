/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:16:05 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/10 15:10:29 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include"AMateria.hpp"
class Ice : public AMateria{
    public:
    Ice();
    Ice(std::string type);
    Ice(const Ice &t);
    Ice &operator = (const Ice &t);
    AMateria* clone() const;
    ~Ice();
};
#endif