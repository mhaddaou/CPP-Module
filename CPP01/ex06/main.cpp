/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:05:15 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 18:44:00 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main (int ac, char **av)
{
    Harl harl;
    if (ac == 2){
        harl.complain(av[1]);
    }
    else
        std::cout << "Error \n \t In the args" << std::endl;
    return (0);
}