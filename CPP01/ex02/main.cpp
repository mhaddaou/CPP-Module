/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:18:47 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/25 13:10:25 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "• The memory address of the string variable: \t";
    std::cout << &str << std::endl;
    std::cout << "• The memory address held by stringPTR : \t";
    std::cout << &stringPTR << std::endl;
    std::cout << "• The memory address held by stringREF: \t";
    std::cout << &stringREF << std::endl;

    std::cout << "• The value of the string variable: \t";
    std::cout << str << std::endl;
    std::cout << "• The value pointed to by stringPTR: \t";
    std::cout << stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF: \t";
    std::cout << stringREF << std::endl;
}