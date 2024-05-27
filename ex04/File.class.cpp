/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:36:18 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/28 00:38:43 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File() {
    this->_length = 0;
    this->_s1Len = 0;
    return ;
}

File::File(std::string fileName, std::string s1, std::string s2)
    : _fileName(fileName), _s1(s1), _s2(s2), _s1Len(0), _length(0) {}

File::~File(){
    return ;
}

std::string File::getName() {
    return this->_fileName;
}

std::string File::getS1() {
    return this->_s1;
}

std::string File::getS2() {
    return this->_s2;
}

std::string File::getTheLine() {
    return this->_line;
}

std::string File::getFileContent() {
    return this->_fileContent;
}

///////////////////////////////////////////////////////////////////////////////////////////

void	File::fileCreator()
{
	std::ofstream ofs(this->_fileName.insert(this->_fileName.length(),".replace").c_str());
    if (ofs.is_open()) {
        ofs << this->_fileContent;
        ofs.close();
    }
}

void File::mixer()
{
    int j = 0;

    for (int i = 0; this->_fileContent[i]; i++)
    {
        if (this->_fileContent[i] == this->_s1[0])
        {
            while (this->_fileContent[i] == this->_s1[j] && this->_fileContent[i] && this->_s1[j])
            {
                i++;
                j++;
            }
            if (this->_fileContent[i - 1] == this->_s1[this->_s1Len - 1])
            {
                i -= this->_s1Len;
                this->_fileContent.erase(i, _s1Len);
                this->_fileContent.insert(i, this->_s2);
                i += this->_s1Len;
            }
            j = 0;
        }
    }
    std::cout << this->_fileContent << std::endl;
}

void File::counter()
{
    
    while (this->_s1[this->_s1Len])
        this->_s1Len++;
    while (this->_fileContent[this->_length])
        this->_length++;
}

void File::fileReader(std::ifstream &ifs) {

    while (std::getline(ifs, this->_line))
    {
        this->_fileContent += this->_line;
        if (!ifs.eof())
            this->_fileContent += "\n";
    }
}