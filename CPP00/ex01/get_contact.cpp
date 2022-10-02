/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:26:25 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/02 17:23:37 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int getFirstName(phonebook *contact, char c)
{
    int i;
    if (c == 'f')
        i = contact->index;
    else
    {
        i = contact->index_two;
        std::cout << "here is i = " << i << std::endl;
    }
    std::cout <<  "$> first name:" << std::endl << "=> : ";
    while (getline(std::cin, contact->first_name[i]))
    {
        if (contact->first_name[i] == "")
           std::cout <<  "$> first name:" << std::endl << "=> : "; 
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
    
}
int getLastName(phonebook *contact, char c)
{
    int i;
    if (c == 'f')
        i = contact->index;
    else
        i = contact->index_two;
    std::cout <<  "$> last name:" << std::endl << "=> : ";
    while (getline(std::cin, contact->last_name[i]))
    {
        if (contact->last_name[i] == "")
            std::cout <<  "$> last name:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}
int getNickName(phonebook *contact, char c)
{
    int i;
    if (c == 'f')
        i = contact->index;
    else
        i = contact->index_two;
    std::cout <<  "$> nick name:" << std::endl << "=> : ";
    while (getline(std::cin, contact->nickname[i]))
    {
        if (contact->nickname[i] == "")
            std::cout <<  "$> nick name:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}
int getNumberPhone(phonebook *contact, char c)
{
    int i;
    if (c == 'f')
        i = contact->index;
    else
        i = contact->index_two;
    std::cout <<  "$> number phone:" << std::endl << "=> : ";
    while (getline(std::cin, contact->phone_number[i]))
    {
        if (contact->phone_number[i] == "")
            std::cout <<  "$> number phone:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}
int getDarckestSecret(phonebook *contact, char c)
{
    int i;
    if (c == 'f')
        i = contact->index;
    else
        i = contact->index_two;
    std::cout <<  "$> darkest secret:" << std::endl << "=> : ";
    while (getline(std::cin, contact->darkest_secret[i]))
    {
        if (contact->darkest_secret[i] == "")
            std::cout <<  "$> darkest secret:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}
void get_contact(phonebook *contact)
{
    char c;
    
    c = 'f';
    if (contact->index == 8)
    {
        if (contact->index_two == 8)
            contact->index_two = 0;
        c = 's';
    }
    if (getFirstName(contact, c) == EXIT_FAILURE)
        contact->end();
    if (getLastName(contact, c) == EXIT_FAILURE)
        contact->end();
    if (getNickName(contact, c) == EXIT_FAILURE)
        contact->end();
    if (getNumberPhone(contact, c) == EXIT_FAILURE)
        contact->end();
    if (getDarckestSecret(contact, c) == EXIT_FAILURE)
        contact->end();
    if (c == 'f')
        contact->index++;
    else
        contact->index_two++;
    std::cout << "# The contact has been added successfully" << std::endl;
    
}