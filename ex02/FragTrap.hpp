#ifndef FragTrap_hpp
#define FragTrap_hpp

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string const name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);
        FragTrap & operator=(FragTrap const & rhs);
        void highFivesGuys(void);
    private:
        
};

#endif