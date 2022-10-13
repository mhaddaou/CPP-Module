/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:35:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/09 17:33:30 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Weapon{
    public:
       
        Weapon(std::string type);
        Weapon(std::string *_type);
        void setType(std::string type);
        std::string getType();
        bool checkEmptyString(const std::string &n);
        ~Weapon();
    private:
        std::string _type;
    
};


#endif