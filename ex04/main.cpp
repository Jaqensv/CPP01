/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:54:45 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/30 19:12:29 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

int main(int argc, char **argv)
{
    File instance;

    std::ifstream ifs(argv[1]);
    instance.s1 = argv[2];
    instance.s2 = argv[3];
    //ifs >> instance.file_content;
    std::getline(ifs, instance.file_content);
    //std::cout << instance.file_content << std::endl;
    // if (instance.s1 == instance.s1)
    // {
    //     std::cout << "s1 and s2 have the same occurence" << std::endl;
    //     return (0);
    // }
    if (argc != 4)
    {
        std::cout << "wrong param number" << std::endl;
        return (0);
    }
    instance.counter();
    instance.mixer();
    
    ifs.close();
    return (0);
}