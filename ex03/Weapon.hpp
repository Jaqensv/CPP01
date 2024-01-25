/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:54:23 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/25 17:39:20 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string const &getType() const;
    void setType(std::string type);
private:
    std::string _type;
};

#endif