/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:13:51 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/24 14:14:03 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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