/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:20:03 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 16:40:50 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"


Sed::Sed(std::string filename, std::string _s1, std::string _s2){
    setFileName(filename);
    setS1(_s1);
    setS2(_s2);
}

void Sed::setFileName(std::string fileName)
{
    this->filename = fileName;
}

void Sed::setS1(std::string _s1)
{
    this->s1 = _s1;
}

void Sed::setS2(std::string _s2)
{
    this->s2 = _s2;
}

std::string Sed::getFileName()
{
    return (this->filename);
}

std::string Sed::getS1()
{
    return (this->s1);
}

std::string Sed::getS2()
{
    return (this->s2);
}

bool Sed::is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

Sed::~Sed(){}