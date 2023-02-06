#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}
ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}
ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}
void ScavTrap::attack(std::string const & target)
{
    if(_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
        return;
    }
    if(_energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    if(_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " cannot enter in GKM, he is dead !" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}

