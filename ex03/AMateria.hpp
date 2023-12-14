#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const &type);
        AMateria(AMateria &t);
        AMateria &operator = (const AMateria &t);
        AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
};
#endif