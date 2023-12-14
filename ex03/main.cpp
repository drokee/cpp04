#include"AMateria.hpp"
#include"MateriaSource.hpp"
#include"Character.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
int main1()
{
        MateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        std::cout <<"                    __________----------_____________"<< std::endl;
        delete bob;
        delete me;
        delete src;
        return 0;
}

int main(){
        main1();
        system("leaks AMateria");

}
