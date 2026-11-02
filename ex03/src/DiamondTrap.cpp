#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Nobody_clap_name")
{
    _name = "Nobody";
    _Hit_points = FragTrap::_Hit_points;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;
//  say something
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
    _name = name;
    _Hit_points = FragTrap::_Hit_points;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;
//  SAY SOMETHING
}

DiamondTrap::~DiamondTrap()
{
//  say something you idiot
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << _name << " is saying : MY NAME IS " << ClapTrap::_name << " !!!!\nHe seems to be confused..." << std::endl; 
}
