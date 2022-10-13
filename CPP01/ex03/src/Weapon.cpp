/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:17:59 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/09 17:34:30 by mhaddaou         ###   ########.fr       */
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

Weapon::Weapon(std::string *_type)
{
    if (_type == NULL)
        exit(0);
}
Weapon::Weapon(std::string type)
{
    setType(type);
}


bool Weapon::checkEmptyString(const std::string &n){
    return (n.size() == 0);
}

Weapon::~Weapon()
{
    std::cout << "Destructor called" << std::endl;
}