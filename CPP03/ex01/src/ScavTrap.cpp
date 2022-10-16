/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:48:55 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 15:30:16 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoint = 50;
	this->attackDamage = 20;
}
ScavTrap::ScavTrap(std::string _name){
    this->name = _name;
    this->hitPoints = 100;
    this->energyPoint = 50;
	this->attackDamage = 20;
    std::cout << this->name << " ScavTrap constructor parametrize called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
    
    (*this) = obj;
    
	std::cout << this->name << " ScavTrap copy created" << std::endl;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& obj){
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoint = obj.energyPoint;
        this->attackDamage = obj.attackDamage;
        std::cout << this->name << " ScavTrap copy assignemet operator called" << std::endl;
        return (*this);
        
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor is called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if (energyPoint > 0 && hitPoints > 0)
    {
        std::cout << "ScavTrap " <<  name << " attacked " << target<< " causing " 
        << attackDamage<< " points of damage!" << std::endl;        
    }
    else
        std::cout << name <<  "can't attack because is dead" << std::endl;
}

void ScavTrap::guardGate(){
    if (energyPoint > 0 && hitPoints > 0)
        std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
    else
        std::cout << "ScavTrap can't keeper the gate because is dead" << std::endl;
}