/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:20:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 04:50:13 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

void ClapTrap::attack(const std::string &target){
    if (energyPoint > 0 && hitPoints > 0)
    {
        std::cout << "ClapTrap " <<  name << " attacks " << target<< "causing " << attackDamage<< "points of damage!" << std::endl;
        energyPoint--;
        
    }
    else
        std::cout << "can't attack" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
    if (hitPoints > 0 && energyPoint > 0){
        this->hitPoints -= amount;
    }
    else{
        std::cout << "can't attack" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << this->name << "is repaired " << amount << "four your helth" << std::endl;
    this->hitPoints += amount;
    this->energyPoint--;
}
ClapTrap::ClapTrap(){
    energyPoint = 10;
    hitPoints = 10;
    attackDamage = 10;
    name = "med";
}
ClapTrap::ClapTrap(std::string _name, unsigned int _hitPoints, unsigned int _energyPoint, unsigned int _attackDamage){
    name = _name;
    hitPoints = _hitPoints;
    energyPoint = _energyPoint;
    attackDamage = _attackDamage;
}
ClapTrap::~ClapTrap(){
    std::cout << "the distructor is destroyed" << std::endl;
}