/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:26:25 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/22 11:22:33 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int check_argument(std::string str)
{
    if (str == "")
    {
        std::cout << "$> Can't save empty field" << std::endl;
        return (EXIT_FAILURE);
    }
    
    return (EXIT_SUCCESS);
}

void get_contact(phonebook *contact)
{
    if (contact->index == 8)
    {
        get_new_list(contact);
        return;
    }
    int i = contact->index;
    int run;
    run = 1;
    while (run == 1)
    {
        std::cout <<  "$> first name:" << std::endl << "=> : ";
        
        getline(std::cin, contact->first_name[i]);
        if (check_argument(contact->first_name[i]) == EXIT_SUCCESS)
            run++;
    }
    while (run == 2)
    {
        std::cout <<  "$> last name:" << std::endl << "=> : ";
        getline(std::cin, contact->last_name[i]);
        if (check_argument(contact->last_name[i]) == EXIT_SUCCESS)
            run++;
            
    }
    while (run == 3)
    {
        std::cout <<  "$> nickname:" << std::endl << "=> : ";
        getline(std::cin, contact->nickname[i]);
        if (check_argument(contact->nickname[i]) == EXIT_SUCCESS)
            run++;
    }
    while (run == 4)
    {
        std::cout <<  "$> number phone:" << std::endl << "=> : ";
        getline(std::cin, contact->phone_number[i]);
        if (check_argument(contact->phone_number[i]) == EXIT_SUCCESS)
            run++;
    }
    while (run == 5)
    {
        std::cout <<  "$> darkest secret:" << std::endl << "=> : ";
        getline(std::cin, contact->darkest_secret[i]);
        if (check_argument(contact->darkest_secret[i]) == EXIT_SUCCESS)
            run++;
        
    }
    contact->index++;
    std::cout << "# The contact has been added successfully" << std::endl;
    
}