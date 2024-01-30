/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:36:22 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/30 19:04:12 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_CLASS_HPP
# define FILE_CLASS_HPP

# include <iostream>
# include <fstream>
# include <string>

class File {
public:
    File();
    ~File();
    std::string s1;
    std::string s2;
    std::string file_content;
    std::string filecreator(std::string s1);
    int s1_len;
    int length;
    void mixer();
    void counter();
};

#endif