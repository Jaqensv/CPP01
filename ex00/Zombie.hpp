/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:14:25 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/24 14:14:32 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
    void chumpAnnounce();
private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif