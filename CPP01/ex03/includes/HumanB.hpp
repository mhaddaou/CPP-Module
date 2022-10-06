/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:35:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/05 01:41:54 by mhaddaou         ###   ########.fr       */
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
        void setWeapon(Weapon &Weapon);
        void attack();
        ~HumanB();
    private:
        std::string _name;
        
    
};

#endif