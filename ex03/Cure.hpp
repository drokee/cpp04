/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:12:27 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/10 15:13:03 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include"AMateria.hpp"
class Cure : public AMateria{
    public:
    Cure();
    Cure(std::string type);
    Cure(const Cure &t);
    Cure &operator = (const Cure &t);
    AMateria* clone() const;
    ~Cure();
};
#endif