/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:54:45 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/28 00:43:35 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "wrong param number" << std::endl;
        return EXIT_FAILURE;
    }
    
    File instance(argv[1], argv[2], argv[3]);
    std::ifstream ifs(argv[1]);
    if (!ifs.is_open())
    {
        std::cerr << "Invalid file" << std::endl;
        return EXIT_FAILURE;
    }
    if (instance.getS1() == instance.getS2())
    {
        std::cout << "s1 and s2 have the same occurence" << std::endl;
        return (0);
    }
    instance.fileReader(ifs);
    instance.counter();
    instance.mixer();
    instance.fileCreator();
    ifs.close();
    
    return (0);
}

// The error management is efficient: try to pass a file that does not exist,
// change the permissions, pass it empty, etc.