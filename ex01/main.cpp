#include "Zombie.class.hpp"

int main()
{
    Zombie *zombie_horde;

    zombie_horde = zombieHorde(3, "fripouille");
    delete [] zombie_horde;
    return 0;
}