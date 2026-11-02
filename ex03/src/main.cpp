#include "../include/FragTrap.hpp"

/* * * * * * * * * * * * * * ATTACK TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     FragTrap Nicole("Nicole");

//     std::cout << "\n";

//     Nicole.highFivesGuy();

//     std::cout << "\n";

//     /* NOT ENOUGH ATTACK DAMAGE */
//     Nicole.attack("test");

//     std::cout << "\n";

//     /* NOT ENOUGH ENERGY POINTS */
//     Nicole.add_attack_damage(100);
//     Nicole.rm_or_add_energy(-10);
//     Nicole.attack("test");

//     std::cout << "\n";

//     /* NO TARGET */
//     Nicole.attack("");

//     std::cout << "\n";

//     /* ATTACK WORKS */
//     Nicole.rm_or_add_energy(10);
//     Nicole.attack("enemy");

//     std::cout << "\n";

//     /* HENRY IS DEAD */
//     Nicole.takeDamage(MAX_HEALTH);
//     Nicole.attack("test");

//     std::cout << "\n";

//     return 0;
// }

/* * * * * * * * * * * * * * DAMAGE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     FragTrap Nicolas("Nicolas");

//     std::cout << '\n';

//     /* TAKE DAMAGE */
//     Nicolas.takeDamage(1);

//     std::cout << '\n';

//     Nicolas.takeDamage(0);

//     std::cout << '\n';

//     /* TAKE TO MUCH DAMAGE */
//     Nicolas.takeDamage(100);

//     std::cout << '\n';

//     /* IS ALREADY DEAD */
//     Nicolas.takeDamage(1);

//     std::cout << '\n';

//     return 0;
// }

/* * * * * * * * * * * * * * REPAIRE TEST * * * * * * * * * * * * * * * * */

// int main()
// {
//     FragTrap    Jeanne("Jeanne");

//     std::cout << "\n";

//     /* NOTHING ADDED */
//     Jeanne.beRepaired(0);

//     std::cout << '\n';

//     /* NOT ENOUGH ENERGY */
//     Jeanne.rm_or_add_energy(-10);
//     Jeanne.beRepaired(10);

//     std::cout << '\n';

//     /* TO BIG NUMBER TO ADD */
//     Jeanne.rm_or_add_energy(100);
//     Jeanne.beRepaired(MAX_HEALTH);

//     std::cout << '\n';

//     /* ALREADY TO HEALTHY */
//     Jeanne.beRepaired(1);

//     std::cout << '\n';

//     /* ALREADY DEAD */
//     Jeanne.takeDamage(MAX_HEALTH);
//     Jeanne.beRepaired(1);

//     std::cout << '\n';

//     return 0;
// }
