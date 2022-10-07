/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:29:52 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 11:51:08 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include "contact.hpp"

class Phonebook
{
    private:
        int index;
        int index_two;
        Contact contacts[8];
    public:
        Phonebook();
        void setContacts();
        std::string getFirstName(int index);
        std::string getLastName(int index);
        std::string getNickName(int index);
        std::string getPhoneNumber(int index);
        std::string getDarckestSecret(int index);
        int getIndex();
        void end();
        ~Phonebook();
};

void    checkCommand(std::string command, Phonebook *contact);
int     get_list(Phonebook *phonebook);
void    printSizeMoreThanTen(std::string str);
int     show_contact(Phonebook *contact);
void    print_contact (Phonebook *contact, int index);
int     checkIsNotInt(std::string str);





#endif