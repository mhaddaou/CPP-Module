/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:57:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/09 16:46:23 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main ()
{
    std::cout << "=> creat zombie in heap" << std::endl;
    {
        Zombie *med = newZombie("haddaoui");
        med->announce();
        delete med;
    }
    std::cout << "=> creat zombie in stack" << std::endl;
    {   
        randomChump("mohamed");
    }
    return (EXIT_SUCCESS);
}