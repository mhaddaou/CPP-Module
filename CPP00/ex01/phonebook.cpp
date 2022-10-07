/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:29:43 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 11:57:13 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    index = 0;
    index_two = 0;
}

void Phonebook::end()
{
    std::cout << std::endl;
    std::cout << "\tGoodBye!" << std::endl;
    exit(EXIT_FAILURE);
}

Phonebook::~Phonebook(){}

std::string Phonebook::getFirstName(int index)
{
    return (this->contacts[index].getFirstName());
}
std::string Phonebook::getLastName(int index)
{
    return (this->contacts[index].getLastName());
}

std::string Phonebook::getNickName(int index)
{
    return (this->contacts[index].getNickName());
}

std::string Phonebook::getPhoneNumber(int index)
{
    return (this->contacts[index].getPhoneNumber());
}

std::string Phonebook::getDarckestSecret(int index)
{
    return (this->contacts[index].getDarckestSecret());
}
void Phonebook::setContacts()
{
    int i;

    if (this->index_two == 8)
        this->index_two = 0;
    if (this->index < 8)
        i = this->index;
    else
        i = this->index_two;
    
    if (this->contacts[i].setFirstName() == EXIT_FAILURE)
        end();
    if (this->contacts[i].setLastName() == EXIT_FAILURE)
        end();
    if (this->contacts[i].setNickName() == EXIT_FAILURE)
        end();
    if (this->contacts[i].setPhoneNumber() == EXIT_FAILURE)
        end();
    if (this->contacts[i].setDarkestSecret() == EXIT_FAILURE)
        end();
    if (this->index < 8)
        this->index++;
    else
        this->index_two++;
    std::cout << "# The contact has been added successfully" << std::endl;
    
}

int Phonebook::getIndex()
{
    return (this->index);
}





