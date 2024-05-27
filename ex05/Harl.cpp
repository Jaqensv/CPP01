/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:54:35 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/28 01:36:55 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    return ;
}

Harl::~Harl(){
    return ;
}

void Harl::_debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::_info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error()
{
    std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){

    void (Harl::*ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    for (int i = 0; i < 4; i++)
    {
        if (this->level[i] == level)
            return (this->*ptr[i])();
    }
    std::cout << "Please enter one of the following commands: DEBUG, INFO, WARNING, ERROR or EXIT" << std::endl;
}