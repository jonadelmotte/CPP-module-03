#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"



/**********************************************************/
/*                                                        */
/*                 FRAGTRAP CLASS                         */
/*                                                        */
/**********************************************************/

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(const std::string &name);
        ~FragTrap();

        void    attack(const std::string &target);

        void    guardGate();
} ;

#endif