/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:07:53 by amahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 15:47:50 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include"AMateria.hpp"
class IMateriaSource {
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria* dyalu) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif
