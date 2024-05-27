/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:36:22 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/27 23:33:52 by mde-lang         ###   ########.fr       */
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
    File(std::string fileName, std::string s1, std::string s2);
    ~File();
    std::string getName();
    std::string getS1();
    std::string getS2();
    std::string getTheLine();
    std::string getFileContent();
    void fileReader(std::ifstream &ifs);
    void fileCreator();
    void mixer();
    void counter();
private:
    std::string _s1;
    std::string _s2;
    std::string _fileContent;
    std::string _fileName;
    std::string _line;
    int _s1Len;
    int _length;
};

#endif