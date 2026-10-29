#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    std::cout << "NO ONE is born better !\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    std::cout << _name << " is born better !\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " has died certainly a glorious death !";
}

void    ScavTrap::attack(const std::string &target)
{
    if (_Hit_points > 0 && _Attack_damage > 0 && _Energy_points > 0 && !target.empty())
    {
        std::cout << _name << " destroyed " << target << ", causing " << _Attack_damage << " points of damage !\n";
        _Energy_points--;
    }
    else if (_Hit_points <= 0)
        std::cout << _name << " tried to attack but they seem to be dead\n";
    else if (target.empty())
        std::cout << _name << " tried to attack but they sadly dosen't have a target\n";
    else if (_Energy_points <= 0)
        std::cout << _name << " tried to attack but they are way to tired\n";
    else
        std::cout << _name << " tried to attack but they are way to weak\n";
}

void    ScavTrap::guardGate()
{
    std::cout << _name << " is something of a gate keeper 😎, yeh it's as cool as it's sound !!\n";
}
