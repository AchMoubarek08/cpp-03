#ifndef ScavTrap_hpp
#define ScavTrap_hpp

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string const name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);
        ScavTrap & operator=(ScavTrap const & rhs);
        void guardGate(void);
        void attack(std::string const & target);
    private:
        
};

#endif