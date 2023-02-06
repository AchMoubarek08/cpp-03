#include "FragTrap.hpp"

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
}
FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}
FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

void FragTrap::highFivesGuys(void)
{
    if(_hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " cannot highfive, he is dead !" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << "HighFive" << std::endl;
}

