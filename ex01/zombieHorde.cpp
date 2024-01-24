#include "Zombie.class.hpp"

Zombie* zombieHorde(int n, std::string name){

    Zombie *zombie_horde = new Zombie[n];

    for (int i = 0; i < n; i++){
        zombie_horde[i].setName(name);
        zombie_horde[i].announce();
    }
    
    return (zombie_horde);
} 