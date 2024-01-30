/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:36:18 by mde-lang          #+#    #+#             */
/*   Updated: 2024/01/30 19:09:35 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File(){
    this->length = 0;
    this->s1_len = 0;
    //std::cout << "constructor called" << std::endl;
    return ;
}

File::~File(){
    //std::cout << "destructor called" << std::endl;
    return ;
}

// std::string File::filecreator(std::string s1){

//     std::ofstream newFile("newFile.replace");
//     return (newFile);
// }

void File::mixer()
{   
    int j = 0;

    //std::cout <<" file cont length :" << this->length << std::endl; 
    for (int i = 0; this->file_content[i]; i++)
    {
        // std::cout << this->s1 << std::endl;
        // std::cout << this->s2 << std::endl;
        // std::cout << i << std::endl;
        // std::cout << this->file_content[i] << std::endl;
        //std::cout << this->file_content << std::endl;
        if (this->file_content[i] == this->s1[0])
        {
            while (this->file_content[i] == this->s1[j] && this->file_content[i] && this->s1[j])
            {
                i++;
                j++;
                //std::cout << this->file_content[i] << std::endl;
                //std::cout << "test" << std::endl;
                //std::cout << "i = " << i << std::endl;
            }
            if (this->file_content[i] == this->s1[this->s1_len])
            {
                i -= this->s1_len;
                // std::cout << "s1 len " << this->s1_len << std::endl;
                // std::cout << "i " << i << std::endl;
                this->file_content.erase(i, s1_len);
                this->file_content.insert(i, this->s2);
                i += this->s1_len;
            }
            j = 0;
        }
    }
    std::cout << this->file_content << std::endl;
}

void File::counter()
{
    while (this->s1[this->s1_len])
        this->s1_len++;
    while (this->file_content[this->length])
        this->length++;
}