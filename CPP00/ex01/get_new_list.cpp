/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_new_list.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:36:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/22 11:20:41 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void contunued(phonebook *contact, int i, int run)
{
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
}

void get_new_list(phonebook *contact)
{
    int i;
    int run;
    
    if (contact->index_two == 8)
        contact->index_two = 0;
    run = 1;
    i = contact->index_two;
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
    contunued(contact, i, run);
    contact->index_two++;
    std::cout << "# The contact has been added successfully" << std::endl;
}