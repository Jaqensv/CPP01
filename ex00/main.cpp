/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:14:13 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/24 14:14:14 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Zombiloute;
    Zombiloute = newZombie("Jean Yves Robert Junior");
    Zombiloute->announce();
    delete Zombiloute;
    randomChump("Patoche");
    return 0;
}