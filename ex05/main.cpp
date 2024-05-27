/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:54:12 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/28 01:39:35 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string input;

    std::cout << "Please enter one of the following commands: DEBUG, INFO, WARNING, ERROR or EXIT" << std::endl;
    std::cin >> input;
    while (input != "EXIT")
    {
        harl.complain(input);
        std::cin >> input;
    }
    return (0);
}