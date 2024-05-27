/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:54:38 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/28 01:24:11 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
    
public:
    Harl();
    ~Harl();
    void complain(std::string level);
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
private:
    void _debug();
    void _info();
    void _warning();
    void _error();
};

#endif