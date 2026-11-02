#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << "NO ONE is born its already quite the accomplishment !\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << _name << " is born its already quite the accomplishment !\n";
}

FragTrap::~FragTrap()
{
    std::cout << _name << " has passed, they will most likely not be remembered !\n";
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << _name << "is not the smartest be nice to them : they'r trying to high-fives you !\n";
}