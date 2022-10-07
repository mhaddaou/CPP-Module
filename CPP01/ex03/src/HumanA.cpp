/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:17:37 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 13:30:09 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _Weapon(Weapon)
{
    this->_name = name;
}
void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}