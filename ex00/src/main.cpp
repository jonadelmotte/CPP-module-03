#include "../include/ClapTrap.hpp"

/* * * * * * * * * * * * * * ATTACK TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ClapTrap theynry("theynry");

//     std::cout << "\n";

//     /* NOT ENOUGH ATTACK DAMAGE */
//     theynry.attack("test");

//     std::cout << "\n";

//     /* NOT ENOUGH ENERGY POINTS */
//     theynry.add_attack_damage(100);
//     theynry.rm_or_add_energy(-10);
//     theynry.attack("test");

//     std::cout << "\n";

//     /* NO TARGET */
//     theynry.attack("");

//     std::cout << "\n";

//     /* ATTACK WORKS */
//     theynry.rm_or_add_energy(10);
//     theynry.attack("enemy");

//     std::cout << "\n";

//     /* HENRY IS DEAD */
//     theynry.takeDamage(MAX_HEALTH);
//     theynry.attack("test");

//     std::cout << "\n";

//     return 0;
// }

/* * * * * * * * * * * * * * DAMAGE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ClapTrap hariet("hariet");

//     std::cout << '\n';

//     /* TAKE DAMAGE */
//     hariet.takeDamage(1);

//     std::cout << '\n';

//     hariet.takeDamage(0);

//     std::cout << '\n';

//     /* TAKE TO MUCH DAMAGE */
//     hariet.takeDamage(100);

//     std::cout << '\n';

//     /* IS ALREADY DEAD */
//     hariet.takeDamage(1);

//     std::cout << '\n';

//     return 0;
// }

/* * * * * * * * * * * * * * REPAIRE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ClapTrap    sandrine("sandrine");

//     std::cout << "\n";

//     /* NOTHING ADDED */
//     sandrine.beRepaired(0);

//     std::cout << '\n';

//     /* NOT ENOUGH ENERGY */
//     sandrine.rm_or_add_energy(-10);
//     sandrine.beRepaired(10);

//     std::cout << '\n';

//     /* TO BIG NUMBER TO ADD */
//     sandrine.rm_or_add_energy(100);
//     sandrine.beRepaired(MAX_HEALTH);

//     std::cout << '\n';

//     /* ALREADY TO HEALTHY */
//     sandrine.beRepaired(1);

//     std::cout << '\n';

//     /* ALREADY DEAD */
//     sandrine.takeDamage(MAX_HEALTH);
//     sandrine.beRepaired(1);

//     std::cout << '\n';

//     return 0;
// }
