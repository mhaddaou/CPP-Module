/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:23:11 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/25 11:52:26 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;

    i = 0;
    Zombie *zombieHorde = new Zombie[N];
    while (i < N)
    {
        zombieHorde[i].setName(name);
        i++;
    }
        
        
    return (zombieHorde);
}