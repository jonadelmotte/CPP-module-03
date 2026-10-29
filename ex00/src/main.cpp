#include "../include/ClapTrap.hpp"

/* * * * * * * * * * * * * * ATTACK TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ClapTrap Henry("Henry");

//     std::cout << "\n";

//     /* NOT ENOUGH ATTACK DAMAGE */
//     Henry.attack("test");

//     std::cout << "\n";

//     /* NOT ENOUGH ENERGY POINTS */
//     Henry.add_attack_damage(100);
//     Henry.rm_or_add_energy(-10);
//     Henry.attack("test");

//     std::cout << "\n";

//     /* NO TARGET */
//     Henry.attack("");

//     std::cout << "\n";

//     /* ATTACK WORKS */
//     Henry.rm_or_add_energy(10);
//     Henry.attack("enemy");

//     std::cout << "\n";

//     /* HENRY IS DEAD */
//     Henry.takeDamage(MAX_HEALTH);
//     Henry.attack("test");

//     std::cout << "\n";

//     return 0;
// }

/* * * * * * * * * * * * * * DAMAGE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ClapTrap Hariet("Hariet");

//     std::cout << '\n';

//     /* TAKE DAMAGE */
//     Hariet.takeDamage(1);

//     std::cout << '\n';

//     Hariet.takeDamage(0);

//     std::cout << '\n';

//     /* TAKE TO MUCH DAMAGE */
//     Hariet.takeDamage(100);

//     std::cout << '\n';

//     /* IS ALREADY DEAD */
//     Hariet.takeDamage(1);

//     std::cout << '\n';

//     return 0;
// }

/* * * * * * * * * * * * * * REPAIRE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     ClapTrap    Sandrine("Sandrine");

//     std::cout << "\n";

//     /* NOTHING ADDED */
//     Sandrine.beRepaired(0);

//     std::cout << '\n';

//     /* NOT ENOUGH ENERGY */
//     Sandrine.rm_or_add_energy(-10);
//     Sandrine.beRepaired(10);

//     std::cout << '\n';

//     /* TO BIG NUMBER TO ADD */
//     Sandrine.rm_or_add_energy(100);
//     Sandrine.beRepaired(MAX_HEALTH);

//     std::cout << '\n';

//     /* ALREADY TO HEALTHY */
//     Sandrine.beRepaired(1);

//     std::cout << '\n';

//     /* ALREADY DEAD */
//     Sandrine.takeDamage(MAX_HEALTH);
//     Sandrine.beRepaired(1);

//     std::cout << '\n';

//     return 0;
// }
