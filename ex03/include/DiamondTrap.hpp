#ifndef DIAMONDTRAP_HPP
# define DIAMONTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"



/**********************************************************/
/*                                                        */
/*                 DIAMONDTRAP CLASS                      */
/*                                                        */
/**********************************************************/

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string    _name;

public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    ~DiamondTrap();
};

#endif