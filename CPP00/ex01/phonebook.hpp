/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:17:50 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/23 08:01:25 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class phonebook
{
    public:
        int index;
        int index_two;
        std::string first_name[8];
        std::string last_name[8];
        std::string nickname[8];
        std::string phone_number[8];
        std::string darkest_secret[8];
        void end (void){
            std::cout << std::endl << "GOODBYE!" << std::endl;
            exit(0);
        }
    private:
    
};

//function

void    get_contact(phonebook *contact);
int     check_argument(std::string str);
void    get_new_list(phonebook *contact);
int     get_list(phonebook *contact);
int     show_contact(phonebook *contact);
void    print_space(int len_space);
void    contunued(phonebook *contact, int i, int run);
void    print_contact (phonebook *contact, int index);
void    checkCommand(std::string command, phonebook *contact);

#endif