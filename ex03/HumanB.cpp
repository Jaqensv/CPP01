/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:00 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/25 17:52:33 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name){
    std::cout << this->name << " constructor called" << std::endl;
}

HumanB::~HumanB(){
    return ;
}

void HumanB::attack(){
    if (!this->weapon)
        std::cout << "bruuuuuuh" << std::endl;
    else
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}