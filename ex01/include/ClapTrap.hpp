#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

# define MAX_HEALTH 2147483647

/**********************************************************/
/*                                                        */
/*                 CLAPTRAP CLASS                         */
/*                                                        */
/**********************************************************/

class ClapTrap
{
    protected :
        std::string _name;
        unsigned int         _Hit_points;
        unsigned int         _Energy_points;
        unsigned int         _Attack_damage;

    public :
        ClapTrap();
        ClapTrap(const std::string &name);
        ~ClapTrap();

        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        void    add_attack_damage(unsigned int amount);
        void    rm_or_add_energy(int amount);
} ;

#endif