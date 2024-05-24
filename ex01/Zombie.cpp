/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:08:26 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/24 17:08:27 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

    return ;
}

Zombie::Zombie(std::string name) : _name(name){

    return ;
}

Zombie::~Zombie(){

    std::cout << this->_name << " disappears..." << std::endl;
}

void Zombie::chumpAnnounce(void){

    std::cout << this->_name << " : Yo, I am a Zombie !" << std::endl;
}

void Zombie::announce(void){

    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->_name = name;
}