/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:01:32 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 03:28:14 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(): type("Animal"){}

Animal::Animal(std::string _type){
    type = _type;
}
Animal::Animal(const Animal &other){
    *this = other;
}
Animal& Animal::operator= (const Animal &other){
    this->type = other.type;
    return (*this);
}

std::string Animal::getType(){
    return (type);
}

void Animal::makeSound(){
    std::cout << "the animal sound!" << std::endl;
}