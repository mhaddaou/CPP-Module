/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:00:47 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 11:58:24 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"



int Contact::setFirstName(void)
{
    std::cout <<  "$> first name:" << std::endl << "=> : ";
    while (getline(std::cin, this->firstName))
    {
        if (this->firstName == "")
           std::cout <<  "$> first name:" << std::endl << "=> : "; 
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}

Contact::Contact(){}
Contact::~Contact(){}

int Contact::setLastName(void)
{
    std::cout <<  "$> last name:" << std::endl << "=> : ";
    while (getline(std::cin, this->lastName))
    {
        if (this->lastName == "")
            std::cout <<  "$> last name:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
    
}

int Contact::setNickName(void)
{
    std::cout <<  "$> nick name:" << std::endl << "=> : ";
    while (getline(std::cin, this->nickName))
    {
        if (this->nickName == "")
            std::cout <<  "$> nick name:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
    
}
int Contact::setPhoneNumber(void)
{
    std::cout <<  "$> number phone:" << std::endl << "=> : ";
    while (getline(std::cin, this->phoneNumber))
    {
        if (this->phoneNumber == "")
            std::cout <<  "$> number phone:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
    
}
int Contact::setDarkestSecret(void)
{
    std::cout <<  "$> darkest secret:" << std::endl << "=> : ";
    while (getline(std::cin, this->darkestSecret))
    {
        if (this->darkestSecret == "")
            std::cout <<  "$> darkest secret:" << std::endl << "=> : ";
        else
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
    
}

std::string Contact::getFirstName(void)
{
    return (this->firstName);
}

std::string Contact::getLastName(void)
{
    return (this->lastName);
}

std::string Contact::getNickName(void)
{
    return (this->nickName);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

std::string Contact::getDarckestSecret(void)
{
    return (this->darkestSecret);
}