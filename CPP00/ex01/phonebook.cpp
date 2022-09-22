/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:18:59 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/22 11:19:28 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main (int ac, char **av)
{
    phonebook contact;
    std::string check;
    bool run;

    run = true;
    contact.index = 0;
    while (run)
    {
        std::cout << "# enter your command" << std::endl;
        std::cout << "=> : ";
        getline(std::cin, check);
        if (check == "SEARCH")
            (get_list(&contact));
        else if (check == "ADD")
            get_contact(&contact);
        else if (check == "EXIT")
        {
            std::cout << "Goodbye!" << std::endl;
            run = false;
        }   
        else
            std::cout << "this command not found" << std::endl;
    }
}