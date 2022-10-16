/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:20:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 11:23:59 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

void ClapTrap::attack(const std::string &target){
    if (energyPoint > 0 && hitPoints > 0)
    {
        std::cout << "ClapTrap " <<  name << " attacked " << target<< " causing " 
        << attackDamage<< " points of damage!" << std::endl;        
    }
    else
        std::cout << name <<  "can't attack because is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (hitPoints > 0 && energyPoint > 0){
        std::cout <<"ClapTrap " << name <<  " has taken "<< amount
        << " damage" << std::endl;
        if (amount > hitPoints){
            amount = hitPoints;
        }
        hitPoints -= amount;
    }
    else{
        std::cout << "ClapTrap " << name <<" can't take damage because is dead!" << std::endl;
    }
    if ((int)hitPoints < 0)
        hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount){
    
    if (hitPoints > 0 && energyPoint > 0){
        std::cout << this->name << "ClipTrap has  repaired " << 
        amount << "hit points " << std::endl;
        this->hitPoints += amount;
        if (energyPoint > 0)
            this->energyPoint--;
    }
    else {
        std::cout << name << "ClapTap can't be repair because is dead" << std::endl;
    }
}
ClapTrap::ClapTrap()
    :name("psychom"),
    hitPoints(10),
    energyPoint(10),
    attackDamage(0){
        std::cout << "default constructor is creat ClapTrap that name psychom" << std::endl;
    }
    
ClapTrap::ClapTrap(std::string _name)
    :name(_name),
    hitPoints(10),
    energyPoint(10),
    attackDamage(0){
        std::cout << "constructor parameterize is creat ClapTrap that name: " << _name << std::endl;
    }
    
ClapTrap::~ClapTrap(){
    std::cout << name <<" is destroyed" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &obj){
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoint = obj.energyPoint;
    this->attackDamage = obj.attackDamage;
    return (*this);
}