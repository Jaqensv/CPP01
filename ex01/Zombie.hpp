/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:08:23 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/24 17:08:24 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <random>

class Zombie {
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
    void chumpAnnounce();
    void setName(std::string name);
private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int n, std::string name);


#endif