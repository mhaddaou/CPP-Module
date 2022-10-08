/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:05:15 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/08 15:06:48 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main (int ac, char **av)
{
    Harl harl;
    if (ac == 2){
        int i = 0;
        std::string contents[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        while (i < 4){
            if (contents[i] == av[1])
                break;
            i++;
        }
        switch (i)
        {
        case 0:
            while (i < 4){
                harl.complain(contents[i]);
                i++;
            }
            break;
        case 1:
            while (i < 4){
                harl.complain(contents[i]);
                i++;
            }
            break;
        case 2:
            while (i < 4){
                    harl.complain(contents[i]);
                    i++;
                }
            break;
        case 3:
            while (i < 4){
                harl.complain(contents[i]);
                i++;
            }
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
    }
    else
        std::cout << "Error \n \t In the args" << std::endl;
    return (0);
}