/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:54:35 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/06 17:56:06 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    return ;
}

Harl::~Harl(){
    return ;
}

void Harl::complain(std::string level){


    Harl::_debug();
    Harl::_info();
    Harl::_warning();
    Harl::_error();
}

void Harl::_debug()
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::_info()
{
    std::cout << " cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning()
{
    std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}