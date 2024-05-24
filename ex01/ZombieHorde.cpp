/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:08:29 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/24 17:08:30 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name){

    Zombie *zombie_horde = new Zombie[n];

    for (int i = 0; i < n; i++){
        zombie_horde[i].setName(name);
        zombie_horde[i].announce();
    }
    
    return (zombie_horde);
} 