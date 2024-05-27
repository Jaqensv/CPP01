/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:18:00 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/27 16:55:53 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name){
    std::cout << this->_name << " constructor called" << std::endl;
}

HumanB::~HumanB(){
    std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack(){
    if (!this->_weapon)
        std::cout << "bruuuuuuh" << std::endl;
    else
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon;
}