/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:20:13 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/27 15:09:05 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Conversion.hpp"

Conversion::Conversion(){}

Conversion::Conversion(std::string str){
    std::string copystr;
    copystr = Conversion::checkIsPoN(str, &sign);
    if (Conversion::chckIsInteger(copystr) == 0)
        Conversion::convertIntToALL(copystr);
    else if (Conversion::checkIsFloat(copystr) == 0)
        Conversion::convertFloatToAll(copystr);
    else if (Conversion::checkIsDouble(copystr) == 0)
        std::cout << "is double" << std::endl;
    else if (Conversion::checkIsChar(copystr) == 0)
        std::cout << "is char" << std::endl;
    else
        throw Conversion::InvalidInput();
    
}
void Conversion::convertFloatToAll(std::string str) const{
    std::cout << "the n is float" << std::endl;
    int number = atoi(str.c_str());
    std::cout << "number" << std::endl;
}

void Conversion::convertIntToALL(std::string str) const{
    int number = atoi(str.c_str());
    Conversion::convertIntToChar(number);
    Conversion::printInt(number);
    Conversion::convertIntToFloat(number);
    Conversion::convertIntToDouble(number);
}
void Conversion::printInt(int number) const{
    std::cout << "int: ";
    std::cout << number  * sign << std::endl;
}

void Conversion::convertIntToFloat(int number) const{
    float f = static_cast<float>(number);
    std::cout << "float: ";
    f *= sign;
    std::cout << f << ".0f" << std::endl;
}

void Conversion::convertIntToDouble(int number) const{
    double d = static_cast<double>(number);
    d  *= sign;
    std::cout << "double: ";
    std::cout << d << ".0"<< std::endl; 
    
}

std::string Conversion::checkIsPoN(std::string str, int *ptr) const{
    int i = 0;
    std::string copystr;
    int negative = 0;
    for(; str[i] == '+' || str[i] == '-'; i++){
        if (str[i] == '-')
            negative++;
    }
    if (!(negative % 2))
        *ptr = 1;
    else
        *ptr = -1;
    copystr = str.substr(i, str.length());
    return (copystr);    
}

Conversion::Conversion(const Conversion & other){
    *this = other;
}

Conversion& Conversion::operator=(const Conversion& other){
    c = other.c;
    d = other.d;
    f = other.f;
    df = other.df;
    sign = other.sign;
    return (*this);
}

Conversion::~Conversion(){}

int Conversion::chckIsInteger(std::string str) const{
    int i = 0;
    while (str[i]){
        if (!isdigit(str[i]))
            return (1);
        i++;
    }   
    return (0);
}

void convertAll(int number){
    std::cout << number << std::endl;
    std::cout << "yes is number" << std::endl;
}

const char* Conversion::InvalidArgs::what() const throw(){
    return ("ERROR : invalid arguments");
}

const char * Conversion::NoPrintableChar::what() const throw(){
    return ("Non displayable");
}

const char * Conversion::Impossible::what() const throw(){
    return ("impossible");
}

const char * Conversion::NotaNumber::what() const throw(){
    return ("nan");
}

const char * Conversion::NotaFloat::what() const throw(){
    return ("nanf");
}

const char * Conversion::InvalidInput::what() const throw(){
    return ("ERROR: invalid input");
}

int Conversion::checkIsNoPrintableChar(std::string str) const{
    int i = 0;
    for (; str[i]; i++){
        if (!isprint(str[i]))
            return (1);
    }
    return (0);
}

int Conversion::checkIsFloat(std::string str) const{
    int i = 0;
    int point = 0;
    int f = 0;
    for (;str[i];i++){
        if (str[i] == '.' || str[i] == 'f'){
            if (str[i] == '.')
                point++;
            else
                f++;
        }
    }
    if ((f != 1) || point > 1)
        return (1);
    i = 0;
    while (str[i]){
        if (!isdigit(str[i])){
            if (str[i] == '.' && str[i+1] == 'f')
                return (1);
            if (str[i] != 'f' && str[i] != '.')
                return (1);
        }
        
        std::cout << i << std::endl;
        i++;
    }
    return (0);
}
int Conversion::checkIsDouble(std::string str) const{
    int i = 0;
    int p = 0;
    int index;
    for(; str[i]; i++){
        if (str[i] == '.'){
            index = i;       
            p++;
        }
    }
    if (p != 1)
        return (1);
    else{
        for(i=0; str[i]; i++){
            if (i == index)
                continue;
            else if (!isdigit(str[i]))
                return (1);
        }
    }
    return (0);
}
int Conversion::checkIsChar(std::string str) const{
    if (str.length() != 1)
        return (1);
    return (0);
}
void Conversion::convertIntToChar(int number) const{
    std::cout << "char: ";
    if (number * sign < 0)
        std::cout << "impossible" << std::endl;
    else if (!isprint(number))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << static_cast<char>(number) << std::endl;
}
