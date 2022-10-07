/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:34:07 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 13:26:08 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "../includes/Weapon.hpp"

class HumanA{
    public:
        HumanA(std::string name, Weapon &Weapon);
        void attack();
        // ~HumanA();
    private:
        std::string _name;
        Weapon &_Weapon;
    
};

#endif
