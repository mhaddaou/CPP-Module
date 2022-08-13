/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:26:53 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/08/13 04:11:35 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string.h>
#include <iostream>
using namespace std;

class phonebook
{
    public:
        string first_name[8];
        string last_name[8];
        string nickname[8];
        string phone_number[8];
        string darkest_secret[8];
        int index;
    private:
        
} ;


// function 
int check_command(string command);
void get_contact(phonebook *contact);
void    search(phonebook *contacts);
void check_info(string info);



#endif