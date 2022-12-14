/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:35:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 16:01:05 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "../includes/Weapon.hpp"

class HumanB{
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon & jweapon);

    private:
        std::string _name;
        Weapon *_weapon;
};
   

#endif