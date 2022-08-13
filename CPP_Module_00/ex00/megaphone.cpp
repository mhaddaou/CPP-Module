/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:01:26 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/08/09 01:54:38 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

void    divide_char(string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        cout << str[i] ;
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
    cout << endl;
}

int main (int ac, char **av)
{
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
        divide_str(ac, av);
}