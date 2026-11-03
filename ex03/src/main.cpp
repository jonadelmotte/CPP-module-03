#include "../include/DiamondTrap.hpp"

/* * * * * * * * * * * * * * DIAMOND TEST * * * * * * * * * * * * * * * * */

int main()
{
    DiamondTrap Tristan("Tristan");

    std::cout << "\n";

    Tristan.guardGate();

    std::cout << "\n";

    Tristan.highFivesGuys();

    std::cout << "\n";

    Tristan.whoAmI();

    std::cout << "\n";
}


/* * * * * * * * * * * * * * ATTACK TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     DiamondTrap José("José");

//     std::cout << "\n";

//     /* NOT ENOUGH ATTACK DAMAGE */
//     José.attack("test");

//     std::cout << "\n";

//     /* NOT ENOUGH ENERGY POINTS */
//     José.add_attack_damage(100);
//     José.rm_or_add_energy(-10);
//     José.attack("test");

//     std::cout << "\n";

//     /* NO TARGET */
//     José.attack("");

//     std::cout << "\n";

//     /* ATTACK WORKS */
//     José.rm_or_add_energy(10);
//     José.attack("enemy");

//     std::cout << "\n";

//     /* HENRY IS DEAD */
//     José.takeDamage(MAX_HEALTH);
//     José.attack("test");

//     std::cout << "\n";

//     return 0;
// }

/* * * * * * * * * * * * * * DAMAGE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     DiamondTrap Patrick("Patrick");

//     std::cout << '\n';

//     /* TAKE DAMAGE */
//     Patrick.takeDamage(1);

//     std::cout << '\n';

//     Patrick.takeDamage(0);

//     std::cout << '\n';

//     /* TAKE TO MUCH DAMAGE */
//     Patrick.takeDamage(100);

//     std::cout << '\n';

//     /* IS ALREADY DEAD */
//     Patrick.takeDamage(1);

//     std::cout << '\n';

//     return 0;
// }

/* * * * * * * * * * * * * * REPAIRE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     DiamondTrap    Lucile("Lucile");

//     std::cout << "\n";

//     /* NOTHING ADDED */
//     Lucile.beRepaired(0);

//     std::cout << '\n';

//     /* NOT ENOUGH ENERGY */
//     Lucile.rm_or_add_energy(-10);
//     Lucile.beRepaired(10);

//     std::cout << '\n';

//     /* TO BIG NUMBER TO ADD */
//     Lucile.rm_or_add_energy(100);
//     Lucile.beRepaired(MAX_HEALTH);

//     std::cout << '\n';

//     /* ALREADY TO HEALTHY */
//     Lucile.beRepaired(1);

//     std::cout << '\n';

//     /* ALREADY DEAD */
//     Lucile.takeDamage(MAX_HEALTH);
//     Lucile.beRepaired(1);

//     std::cout << '\n';

//     return 0;
// }
