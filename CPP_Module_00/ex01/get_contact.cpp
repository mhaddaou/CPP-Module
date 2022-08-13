/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:49:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/08/13 04:11:20 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void check_info(string info)
{
    int len;

    len = info.length();
    if (len > 10)
    {
        cout << "wrong length" << endl;      
        exit(EXIT_FAILURE);
    }
}

void get_contact(phonebook *contact)
{
    cout << "=> enter your first name" << endl;
    getline(cin,contact->first_name[contact->index]);
    check_info(contact->first_name[contact->index]);
    cout << "=> enter your last name" << endl;
    getline(cin,contact->last_name[contact->index]);
    check_info(contact->last_name[contact->index]);
    cout << "=> enter your nickname" << endl;
    getline(cin,contact->nickname[contact->index]);
    check_info(contact->nickname[contact->index]);
    cout << "=> enter your phone number" << endl;
    getline(cin,contact->phone_number[contact->index]);
    check_info(contact->phone_number[contact->index]);
    cout << "=> enter your darkest secret" << endl;
    getline(cin,contact->darkest_secret[contact->index]);
    check_info(contact->darkest_secret[contact->index]);
    contact->index++;
}