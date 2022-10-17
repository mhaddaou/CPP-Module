/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:01:32 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 01:31:46 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(): type("Animal"){
    std::cout << type << " default constructor is called" << std::endl;
}

Animal::Animal(std::string _type){
    type = _type;
    std::cout << type << " parameterize constructor is called" << std::endl;
}
Animal::Animal(const Animal &other){
    *this = other;
    std::cout << type << "copy constructor is called" << std::endl;
}
Animal& Animal::operator= (const Animal &other){
    this->type = other.type;
    std::cout << type << "copy assignment operator is called" << std::endl;
    return (*this);
}

std::string Animal::getType()const{
    return (type);
}

void Animal::makeSound() const{
    std::cout << type << " make a sound!" << std::endl;
}
Animal::~Animal(){}