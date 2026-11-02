#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"



/**********************************************************/
/*                                                        */
/*                 CLAVTRAP CLASS                         */
/*                                                        */
/**********************************************************/

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(const std::string &name);
        ~ScavTrap();

        void    attack(const std::string &target);

        void    guardGate();
} ;

#endif