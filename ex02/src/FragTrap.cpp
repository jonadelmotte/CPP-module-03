#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << "NO ONE is born better !\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << _name << " is born better !\n";
}

FragTrap::~FragTrap()
{
    std::cout << _name << " has died certainly a glorious death !";
}