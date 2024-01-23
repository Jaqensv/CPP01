#include "Zombie.class.hpp"

Zombie::Zombie(std::string name) : _name(name){

    return ;
}

Zombie::~Zombie(){

    std::cout << this->_name << " disappears..." << std::endl;
    return ;
}

void Zombie::chumpAnnounce (void){

    std::cout << this->_name << " : Yo, I am a Zombie !" << std::endl;
}

void Zombie::announce (void){

    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}