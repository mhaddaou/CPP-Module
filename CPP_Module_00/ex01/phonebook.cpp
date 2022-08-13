/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:31:14 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/08/13 02:37:40 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main ()
{
    phonebook contact; 
    
    string cmd;
    int check;
    bool run;
    run = true;
    contact.index = 0;

    while (run)
    {
        getline(cin, cmd);
        check = check_command(cmd);
        if (check == 0)
            get_contact(&contact);
        else if (check == 1)
            search(&contact);
        else if (check == 2)
            run = false;
        else if (check == 3)
            cout << "this cmd is not found " << endl;
    }
    
}