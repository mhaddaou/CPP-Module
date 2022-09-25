/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:31:51 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/25 12:00:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void Zombie::announce(void)
{
    Zombie::getName();
    std::cout << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::getName(void)
{
    std::cout << this->name ; 
}
void Zombie::setName( std::string str)
{
    this->name = str;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
    Zombie::getName();
    std::cout << " is destroyed" << std::endl;
}