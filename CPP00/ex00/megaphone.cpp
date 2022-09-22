/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:01:26 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/22 12:40:03 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    divide_char(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        std::cout << str[i] ;
        i++;
    }
}

void    divide_str(int ac, char **av)
{
    int i;

    i = 1;
    while(i < ac)
    {
        divide_char(av[i]);
        i++;
    }
    std::cout << std::endl;
}

int main (int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        divide_str(ac, av);
}