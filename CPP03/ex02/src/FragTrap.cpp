/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:55:49 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 16:07:06 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(){
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std:: cout << this->name << " FragTrap default constructor is called" << std::endl;
}
FragTrap::FragTrap(std::string _name){
    this->name = _name;
    this->hitPoints = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << this->name << " FragTrap constructor parametrize is called" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << this->name << " FragTrap destructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj){
    *this = obj;
    std::cout << "FragTrap copy constructor  is called" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& obj){
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoint = obj.energyPoint;
    this->attackDamage = obj.attackDamage;
    std::cout << this->name << " FragTrap copy assignment operator is called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void){
    if (energyPoint > 0 && hitPoints > 0)
        std::cout << this->name << " FragTrap high fives " << std::endl;
    else
        std::cout << this->name <<" FragTrap can't high fives because is dead" << std::endl;
}