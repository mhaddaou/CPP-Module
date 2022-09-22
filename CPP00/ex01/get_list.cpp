/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:42:37 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/22 12:35:10 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <algorithm>

void    print_contact (phonebook *contact, int index)
{
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| first name : " << contact->first_name[index] << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| last name : " << contact->last_name[index] << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| nickname : " << contact->nickname[index] << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| number phone : " << contact->phone_number[index] << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| darkest secret : " << contact->darkest_secret[index]<< std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
}


void show_contact(phonebook *contact)
{
    int check;
    int index;
    while (1)
    {
        std::cout << "$> Enter Index to display Informations or 0 to Exit" << std::endl << "=> : ";
        std::cin >> check;
        if (check == 0)
        {
            std::cin.clear();
            std::cin.ignore();
            break;
        }
        else
        {
            index = check - 1;
            print_contact(contact, index);
        }
    }
    
}

void print_long(std::string str)
{
    int i = 0;
    while (i < 9)
    {
        std::cout << str[i];
        i++;
    }
    std::cout << ". ";
}
void    printSizeMoreThanTen(std::string str)
{
    std::string s1;
    s1 = str.substr(0,9);
    std::cout << std::right << std::setw(16) << s1 << ".";
}

void get_list(phonebook *contact)
{
    int         i;
    std::string str;
    
    i = 0;
    if (contact->index == 0)
    {
        std::cout << "$> please add contact before searching" << std::endl;
        return;
    }
    std::cout << " ---------------------------------------------------------------- "<< std::endl;
    std::cout << "| INDEX |    FIRST NAME    |    LAST NAME     |     NICKNAME     |" << std::endl;
    std::cout << " ---------------------------------------------------------------- "<< std::endl;
    while (i < contact->index)
    {
        std::cout << "|   " << i + 1 << "   | ";
        if (contact->first_name[i].length() > 10)
            printSizeMoreThanTen(contact->first_name[i]);
        else
            std::cout << std::left << std::setw(17) << contact->first_name[i];
        std::cout << "| ";
        if (contact->last_name[i].length() > 10)
            printSizeMoreThanTen(contact->last_name[i]);
        else
            std::cout << std::left << std::setw(17) << contact->last_name[i];
        std::cout << "| ";
        if (contact->nickname[i].length() > 10)
            printSizeMoreThanTen(contact->nickname[i]);
        else
            std::cout << std::left << std::setw(17) << contact->nickname[i];
        std::cout << "|" << std::endl;
        std::cout << " ---------------------------------------------------------------- "<< std::endl;    
        i++;
    }
    show_contact(contact);
}