/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:17:59 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/27 16:55:27 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
private:
    std::string _name;
    Weapon *_weapon;
};

#endif