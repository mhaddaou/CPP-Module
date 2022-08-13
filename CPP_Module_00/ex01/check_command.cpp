/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_command.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:39:22 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/08/13 01:46:06 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int check_command(string command)
{
    if (command == "ADD")
        return (0);
    if (command == "SEARCH")
        return (1);
    if (command == "EXIT")
        return (2);
    return (3);    
}