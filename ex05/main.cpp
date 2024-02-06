/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:54:12 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/06 17:54:24 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){

    Harl harl;
    std::string input;
    
    

    
    while (input != "EXIT")
    {
        std::cin >> input;
        std::cout << input << std::endl;
        for (int i = 0; i < 4; ++i) {
            if (input == harl.level[i]) {
                switch (i) {
                    case 0:  = &Harl::_debug break;
                    case 1:  = &Logger::logInfo; break;
                    case 2: = &Logger::logWarning; break;
                    case 3:  = &Logger::logError; break;
                    default: std::cerr << "Invalid log level!" << std::endl; return;
            }
        }

        
    }


    
}