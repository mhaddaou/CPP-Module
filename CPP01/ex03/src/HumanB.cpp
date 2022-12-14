/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:17:48 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/09 16:21:29 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"


HumanB::HumanB(std::string name)
{
    this->_name = name;
    
}

void HumanB::setWeapon(Weapon & jweapon)  
{
     this->_weapon = &jweapon;
}

void HumanB::attack()
{
    if(this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}