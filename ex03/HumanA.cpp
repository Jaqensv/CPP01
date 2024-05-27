/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:52:48 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/27 16:56:13 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _weapon(type), _name(name){
    std::cout << this->_name << " takes a " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(){
    std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack(){
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;   
}