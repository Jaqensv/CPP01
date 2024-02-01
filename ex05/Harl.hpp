/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:54:38 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/01 20:03:21 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
# define HARL_HPP

class Harl {
public:
    Harl();
    ~Harl();
    void complain(std::string level);
private:
    void _debug(); //peuvent etre call par une fonction publique de la meme classe
    void _info();
    void _warning();
    void _error();
};


#endif