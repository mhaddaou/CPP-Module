/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:17:50 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/22 11:38:37 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>


class phonebook
{
    public:
        int index;
        int index_two;
        std::string first_name[7];
        std::string last_name[7];
        std::string nickname[7];
        std::string phone_number[7];
        std::string darkest_secret[7];
    private:
    
};


//function
void get_contact(phonebook *contact);
int check_argument(std::string str);
void get_new_list(phonebook *contact);
void get_list(phonebook *contact);
void show_contact(phonebook *contact);
void print_space(int len_space);
void contunued(phonebook *contact, int i, int run);
void    print_contact (phonebook *contact, int index);
#endif