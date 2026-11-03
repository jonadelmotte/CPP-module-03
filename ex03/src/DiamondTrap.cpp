#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Nobody_clap_name")
{
    _name = "Nobody";
    _Hit_points = FragTrap::_Hit_points;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;
    std::cout << _name << " seems to be alive :)\n";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
    _name = name;
    _Hit_points = FragTrap::_Hit_points;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;
    std::cout << _name << " seems to be alive :)\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << _name << " is the only name that will be on their grave\n";
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << _name << " is saying : MY NAME IS " << ClapTrap::_name << " !!!!\nHe seems to be confused..." << std::endl; 
}
