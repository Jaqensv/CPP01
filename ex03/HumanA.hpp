/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:47:52 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/27 16:54:02 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
    HumanA(std::string name, Weapon &type);
    ~HumanA();
    void attack();
private:
    std::string _name;
    Weapon &_weapon;
};

#endif