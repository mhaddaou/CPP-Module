/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:42:19 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 11:07:41 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "contact.hpp"


void    checkCommand(std::string command, Phonebook *phonebook)
{
    
    if (command == "SEARCH")
    {
        if(get_list(phonebook))
            phonebook->end();
    }
    else if (command == "ADD")
        phonebook->setContacts();
    else if (command == "EXIT")
            phonebook->end();  
    else
        std::cout << "this command not found" << std::endl;
}

int main ()
{
    Phonebook phonebook;
    std::string line;
    
    
    std::cout << "# enter your command" << std::endl;
    std::cout << "=> : ";
    while (getline(std::cin, line))
    {
        if (line == "")
            std::cout << "=> : ";
        else{
            checkCommand(line, &phonebook); 
            std::cout << "# enter your command" << std::endl;
            std::cout << "=> : ";
        }    
    }
    phonebook.end();
}