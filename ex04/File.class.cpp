/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:36:18 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/01 19:31:40 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File(){
    this->length = 0;
    this->s1_len = 0;
    return ;
}

File::~File(){
    return ;
}

void	File::filecreator()
{
	std::ofstream ofs(this->file_name.insert(this->file_name.length(),".replace").c_str());
    if (ofs.is_open()) {
        ofs << this->file_content;
        ofs.close();
    }
}

void File::mixer()
{   
    int j = 0;

    for (int i = 0; this->file_content[i]; i++)
    {
        if (this->file_content[i] == this->s1[0])
        {
            while (this->file_content[i] == this->s1[j] && this->file_content[i] && this->s1[j])
            {
                i++;
                j++;
            }
            if (this->file_content[i - 1] == this->s1[this->s1_len - 1])
            {
                i -= this->s1_len;
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