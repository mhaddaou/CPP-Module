/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:58:04 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/24 14:18:40 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::getName(std::string str)
{
    this->name = str;
    std::cout << this->name ;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    Zombie::getName(name);
    std::cout << ": ";
}

Zombie::~Zombie()
{
    Zombie::getName(this->name);
    std::cout << " is destroyed" << std::endl;
}


