/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:29:43 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/02 17:29:45 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    checkCommand(std::string command, phonebook *contact)
{
    
    if (command == "SEARCH")
    {
        if(get_list(contact))
            contact->end();
    }
    else if (command == "ADD")
        get_contact(contact);
    else if (command == "EXIT")
            contact->end();  
    else
        std::cout << "this command not found" << std::endl;
}

void initial(phonebook *contact)
{
    int i = 0;
    int j;
    while (i <= 7)
    {
        contact->first_name[i] = "";
        contact->last_name[i] = "";
        contact->darkest_secret[i] = "";
        contact->nickname[i] = "";
        contact->phone_number[i] = "";
        i++;
    }
    contact->index = 0;
    contact->index_two = 0;
}

int main (int ac, char **av)
{
    phonebook contact;
    std::string line;
    
    initial(&contact);
    std::cout << "# enter your command" << std::endl;
    std::cout << "=> : ";
    while (getline(std::cin, line))
    {
        if (line == "")
            std::cout << "=> : ";
        else{
            checkCommand(line, &contact); 
            std::cout << "# enter your command" << std::endl;
            std::cout << "=> : ";
        }    
    }
    contact.end();
}