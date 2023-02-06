#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("hamza");
    scav.attack("zaml");
    scav.takeDamage(110);
    scav.beRepaired(20);
    scav.guardGate();
    return 0;
}