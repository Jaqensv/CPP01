/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:17:59 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/25 17:56:34 by mde-lang         ###   ########.fr       */
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
    std::string name; // private
    Weapon *weapon; // passer en private
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif