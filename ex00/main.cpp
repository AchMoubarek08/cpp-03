#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("trap");
    claptrap.attack("lbeldi");
    claptrap.takeDamage(9);
    claptrap.beRepaired(10);
    return 0;
}