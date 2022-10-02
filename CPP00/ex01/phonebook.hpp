/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:29:52 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/02 17:29:55 by mhaddaou         ###   ########.fr       */
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