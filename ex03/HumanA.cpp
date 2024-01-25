/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:52:48 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/25 17:35:51 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &type) : weapon(type), name(name){
    std::cout << this->name << " takes a " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(){
    return ;
}

void HumanA::attack(){
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;   
}