/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:17:59 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/05 01:39:28 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
void Weapon::setType(std::string type)
{
    this->_type = type;
}
std::string Weapon::getType()
{
    return (this->_type);
}
Weapon::Weapon(std::string type)
{
    setType(type);
    std::cout << getType() << std::endl;
}