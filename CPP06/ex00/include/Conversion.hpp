/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:51:48 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/27 05:03:13 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <cctype>
#include <cstdlib>

class Conversion{
    private:
        char    c;
        int     d;
        float   f;
        double  df;
        int sign;
    public:
        Conversion();
        Conversion(std::string str);
        Conversion (const Conversion &other);
        Conversion& operator=(const Conversion &other);
        ~Conversion();
        class NoPrintableChar :public std::exception{
            public:
                virtual const char * what() const throw(); 
        };
        class Impossible :public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class NotaNumber : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class NotaFloat : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class InvalidArgs : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class InvalidInput : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        int chckIsInteger(std::string str) const;
        int checkIsNoPrintableChar(std::string str) const;
        int checkIsFloat(std::string str) const;
        int checkIsChar(std::string str) const;
        int checkIsDouble(std::string str) const;
        std::string checkIsPoN(std::string str, int *ptr) const;
        void convertIntToChar(int number) const;
        void convertIntToALL(std::string str) const;
        void printInt(int number) const;
        void convertIntToFloat(int number) const;
        void convertIntToDouble(int number) const;
        void convertFloatToAll(std::string str) const;
};

void convertAll(int number);

#endif