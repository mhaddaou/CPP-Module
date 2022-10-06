/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:29:21 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/04 21:57:11 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    print_contact (phonebook *contact, int index)
{
    index--;
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
int checkIsNotInt(std::string str)
{
    int i = 0;

    while (i < str.length())
    {
        if (!isdigit(str[i]))
            return (EXIT_FAILURE);
        i++;
    }
    return (EXIT_SUCCESS);
}


int show_contact(phonebook *contact)
{
    int number;
    std::string check;
    
    std::cout << "$> Enter Index to display Informations or 0 to Exit" << std::endl << "=> : ";
    while (true)
    {
        getline(std::cin, check);
        number = atoi(&check[0]);
        if (std::cin.eof() == 1)
            return (EXIT_FAILURE);
        else if (check == "")
            std::cout << "=> : ";
        else if (checkIsNotInt(check) == EXIT_FAILURE)
        {
            std::cout << "found character this input only integer" << std::endl;
            std::cout << "=> : ";
        }
        else if (number == 0)
            return (EXIT_SUCCESS);
        else if (number > contact->index || number < 0)
        {
            std::cout << "Not Found any contact in this index " << std::endl;
            std::cout << "=> : ";
        }
        else if (number < 9)
        {
            print_contact(contact, number);
            return (EXIT_SUCCESS);
        }
    }
    return (EXIT_FAILURE);
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

int get_list(phonebook *contact)
{
    int         i;
    std::string str;
    
    i = 0;
    if (contact->index == 0)
    {
        std::cout << "$> please add contact before searching" << std::endl;
        return (EXIT_SUCCESS);
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
    if (show_contact(contact))
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}