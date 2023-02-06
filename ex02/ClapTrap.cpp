#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    _name = "Default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "claptrap constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "claptrap Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "claptrap Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "claptrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    if(_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    if(_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints == 0 || _hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    if(_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}
