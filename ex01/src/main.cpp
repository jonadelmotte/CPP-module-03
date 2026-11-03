#include "../include/ScavTrap.hpp"

/* * * * * * * * * * * * * * SCAV TEST * * * * * * * * * * * * * * * * * */

int main()
{
    ScavTrap Josephine("Josephine");

    std::cout << "\n";

    Josephine.guardGate();

    std::cout << "\n";
}


/* * * * * * * * * * * * * * ATTACK TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ScavTrap Colette("Colette");

//     std::cout << "\n";

//     /* NOT ENOUGH ATTACK DAMAGE */
//     Colette.attack("test");

//     std::cout << "\n";

//     /* NOT ENOUGH ENERGY POINTS */
//     Colette.add_attack_damage(100);
//     Colette.rm_or_add_energy(-10);
//     Colette.attack("test");

//     std::cout << "\n";

//     /* NO TARGET */
//     Colette.attack("");

//     std::cout << "\n";

//     /* ATTACK WORKS */
//     Colette.rm_or_add_energy(10);
//     Colette.attack("enemy");

//     std::cout << "\n";

//     /* HENRY IS DEAD */
//     Colette.takeDamage(MAX_HEALTH);
//     Colette.attack("test");

//     std::cout << "\n";

//     return 0;
// }

/* * * * * * * * * * * * * * DAMAGE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ScavTrap Charles("Charles");

//     std::cout << '\n';

//     /* TAKE DAMAGE */
//     Charles.takeDamage(1);

//     std::cout << '\n';

//     Charles.takeDamage(0);

//     std::cout << '\n';

//     /* TAKE TO MUCH DAMAGE */
//     Charles.takeDamage(100);

//     std::cout << '\n';

//     /* IS ALREADY DEAD */
//     Charles.takeDamage(1);

//     std::cout << '\n';

//     return 0;
// }

/* * * * * * * * * * * * * * REPAIRE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ScavTrap    Guy("Guy");

//     std::cout << "\n";

//     /* NOTHING ADDED */
//     Guy.beRepaired(0);

//     std::cout << '\n';

//     /* NOT ENOUGH ENERGY */
//     Guy.rm_or_add_energy(-10);
//     Guy.beRepaired(10);

//     std::cout << '\n';

//     /* TO BIG NUMBER TO ADD */
//     Guy.rm_or_add_energy(100);
//     Guy.beRepaired(MAX_HEALTH);

//     std::cout << '\n';

//     /* ALREADY TO HEALTHY */
//     Guy.beRepaired(1);

//     std::cout << '\n';

//     /* ALREADY DEAD */
//     Guy.takeDamage(MAX_HEALTH);
//     Guy.beRepaired(1);

//     std::cout << '\n';

//     return 0;
// }
