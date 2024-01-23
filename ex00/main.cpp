#include "Zombie.class.hpp"

int main()
{
    Zombie *Zombiloute;
    Zombiloute = newZombie("Jean Yves Robert Junior");
    Zombiloute->announce();
    delete Zombiloute;
    randomChump("Patoche");
    return 0;
}