/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:54:45 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/01 19:27:18 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

int main(int argc, char **argv)
{
    File instance;

    
    std::ifstream ifs(argv[1]);
    instance.file_name = argv[1];
    instance.s1 = argv[2];
    instance.s2 = argv[3];
    if (instance.s1 == instance.s2)
    {
        std::cout << "s1 and s2 have the same occurence" << std::endl;
        return (0);
    }
    if (argc != 4)
    {
        std::cout << "wrong param number" << std::endl;
        return (0);
    }
    while (std::getline(ifs, instance.line))
    {
        instance.file_content += instance.line;
        if (!ifs.eof())
            instance.file_content += "\n";
    }
    instance.counter();
    instance.mixer();
    instance.filecreator();
    ifs.close();
    return (0);
}