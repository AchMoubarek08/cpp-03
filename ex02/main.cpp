#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("Frag");
    frag.attack("target");
    frag.takeDamage(100);
    frag.beRepaired(50);
    frag.highFivesGuys();
    return (0);
}