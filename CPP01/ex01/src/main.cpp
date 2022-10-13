/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:53:16 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/09 16:40:41 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main ()
{
    std::cout << "hello the program is runing" << std::endl;
    {
        Zombie *z = zombieHorde(0, "med");
        for(int i = 0; i < 0; i++){
            z[i].announce();
        }
        delete [] z;
    }
    
    
    
}