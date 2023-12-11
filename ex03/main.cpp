#include"AMateria.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
int main()
{
    Ice b;
    b.use();
    // clone();
    std::cout << b.getType() << std::endl;
}
