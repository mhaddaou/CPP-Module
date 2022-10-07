/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:29:21 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 11:51:00 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "contact.hpp"

void    print_contact (Phonebook *contact, int index)
{
    index--;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| first name : " << contact->getFirstName(index) << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| last name : " << contact->getLastName(index) << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| nickname : " << contact->getNickName(index) << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| number phone : " << contact->getPhoneNumber(index) << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
    std::cout << "| darkest secret : " << contact-> getDarckestSecret(index) << std::endl;
    std::cout <<" -------------------------------------------------------------------"<< std::endl;
}
int checkIsNotInt(std::string str)
{
    int i = 0;

    while (i < (int)str.length())
    {
        if (!isdigit(str[i]))
            return (EXIT_FAILURE);
        i++;
    }
    return (EXIT_SUCCESS);
}


int show_contact(Phonebook *contact)
{
    int number;
    int index;
    std::string check;
    
    index = contact->getIndex();
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
        else if (number > index || number < 0)
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

void    printSizeMoreThanTen(std::string str)
{
    std::string s1;
    s1 = str.substr(0,9);
    std::cout << std::right << std::setw(16) << s1 << ".";
}

int get_list(Phonebook *phonebook)
{
    int         i;
    int index;
    
    index = phonebook->getIndex();
    i = 0;
    if (index == 0)
    {
        std::cout << "$> please add contact before searching" << std::endl;
        return (EXIT_SUCCESS);
    }
    std::cout << " ---------------------------------------------------------------- "<< std::endl;
    std::cout << "| INDEX |    FIRST NAME    |    LAST NAME     |     NICKNAME     |" << std::endl;
    std::cout << " ---------------------------------------------------------------- "<< std::endl;
    while (i < index)
    {
        std::cout << "|   " << i + 1 << "   | ";
        if (phonebook->getFirstName(i).length() > 10)
            printSizeMoreThanTen(phonebook->getFirstName(i));
        else
            std::cout << std::left << std::setw(17) << phonebook->getFirstName(i);
        std::cout << "| ";
        if (phonebook->getLastName(i).length() > 10)
            printSizeMoreThanTen(phonebook->getLastName(i));
        else
            std::cout << std::left << std::setw(17) << phonebook->getLastName(i);
        std::cout << "| ";
        if (phonebook->getNickName(i).length() > 10)
            printSizeMoreThanTen(phonebook->getNickName(i));
        else
            std::cout << std::left << std::setw(17) << phonebook->getNickName(i);
        std::cout << "|" << std::endl;
        std::cout << " ---------------------------------------------------------------- "<< std::endl;    
        i++;
    }
    if (show_contact(phonebook))
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}