/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:20:13 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/29 03:05:35 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Conversion.hpp"

Conversion::Conversion(){}

Conversion::Conversion(std::string str){
    std::string copystr;
    copystr = Conversion::checkIsPoN(str, &sign);
    if (Conversion::chckIsInteger(copystr) == 0)
        Conversion::convertIntToALL(copystr);
    else if (Conversion::checkIsNan(copystr) == 0)
        Conversion::isNan();
    else if (Conversion::checkIsFloat(copystr) == 0)
        Conversion::convertFloatToAll(copystr);
    else if (Conversion::checkIsDouble(copystr) == 0)
        Conversion::convertDoubleToALL(copystr);
    else if (Conversion::checkIsChar(copystr) == 0)
        Conversion::convertCharToALL(copystr);
    else
        throw Conversion::InvalidInput();
    
}
void Conversion::isNan(void) const{
    std::cout << "char: impossible" << std::endl;
    std::cout <<"int: impossible" << std::endl;
    std::cout <<"float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}
int Conversion::checkIsNan(std::string str) const{
    if (str == "nan")
        return (0);
    return (1);
}
void Conversion::convertCharToALL(std::string str) const{
    char c = str[0];
    std::cout << "char: "   << c << std::endl;
    int t = static_cast<int>(c);
    std::cout << "int: " << t << std::endl;
    convertIntToFloat(t);
    convertIntToDouble(t);
}
void Conversion::convertCharToInt(std::string str) const{
    int n = atoi(str.c_str());
    n *= sign;
    std::cout << "int: " << n << std::endl; 
}
void Conversion::convertDoubleToALL(std::string str) const{
    double d = std::stod(str);
    int num_int = static_cast<int>(d);
    convertIntToChar(num_int * sign);
    printInt(num_int);
    printFloat(d,str);
    convertFloatToDouble(static_cast<float>(d), str);
}
void Conversion::convertFloatToAll(std::string str) const{
    float num_float = std::stof(str);
    int num_int = static_cast<int>(num_float);
    convertIntToChar(num_int * sign);
    printInt(num_int);
    printFloat(num_float, str);
    convertFloatToDouble(num_float, str);
}
void Conversion::convertFloatToDouble(float num, std::string str) const{
    std::cout <<"double: ";
     int point = 0;
    for(int i=0; str[i];i++){
        if (str[i] == '.')
            if (str[i + 1] != '0')
                point = 1;
    }
    num *= sign;
    double d = static_cast<double>(num);
    if (point == 1)
        std::cout << d << std::endl;
    else
        std::cout << d << ".0" << std::endl;
    
}
void Conversion::printFloat(float num, std::string str) const{
    int point = 0;
    for(int i=0; str[i];i++){
        if (str[i] == '.')
            if (str[i + 1] != '0')
                point = 1;
    }
    num *= sign;
    std::cout << "float: " ;
    if (point == 1)
        std::cout << num << "f" << std::endl;
    else
        std::cout << num << ".0f" << std::endl;
}

std::string Conversion::removeF(std::string str) const {
    return (str.erase(str.length() - 1));
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
    int A = atoi(str.c_str());
    std::cout << A << std::endl;
    std::cout << str << std::endl;
    if (str != std::to_string(A))
        return (1);    
    return (0);
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
    int indexfloat;
    if (str.length() == 1)
        return (1);
    for (;str[i];i++){
        if (str[i] == '.' || str[i] == 'f'){
            if (str[i] == '.')
                point++;
            else{
                f++;
                indexfloat = i;
            }
        }
    }
    if (str[indexfloat + 1] != '\0')
        return (1);
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
    else if (str[str.length()-1] == '.')
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
