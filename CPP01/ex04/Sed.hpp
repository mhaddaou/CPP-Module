/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:42:49 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 16:21:51 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream> 

class Sed{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Sed(std::string filename, std::string _s1, std::string _s2);
        void setFileName(std::string _filename);
        void setS1(std::string _s1);
        void setS2(std::string _s2);
        bool is_empty(std::ifstream& pFile);
        std::string getFileName();
        std::string getS1();
        std::string getS2();
        ~Sed();
};


//function
int         readAndRemplaceFile(Sed *sed);
int         checkS1AndS2(Sed *sed);
std::string searchAndReplace(std::string contenteFile, Sed *sed);
#endif