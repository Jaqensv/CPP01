/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:57:45 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/25 17:38:40 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
    std::cout << "weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string type){
    this->_type = type;
    std::cout << "weapon is : " << this->_type << std::endl;
}

Weapon::~Weapon(){
    return ;
}

std::string const &Weapon::getType() const{
    return (this->_type);
}

void Weapon::setType(std::string type){
    this->_type = type;
}