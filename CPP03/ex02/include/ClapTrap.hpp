/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:15:51 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 14:53:46 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap{
    protected:
       std::string name;
       unsigned int hitPoints ; // hada dem dyalk
       unsigned int energyPoint;    // l9owa dyalk
       unsigned int attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap (const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif