/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:54:12 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/06 18:37:40 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string input;

    while (input != "EXIT")
    {
        std::cin >> input;
        //std::cout << input << std::endl;
        harl.complain(input);
    }
    return (0);
}