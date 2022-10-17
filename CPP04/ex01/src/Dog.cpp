/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:03:08 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 01:40:01 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << type << " constructor default is called" << std::endl;
}

Dog::Dog(std::string _type){
    type = _type;
    std::cout << type << " constructor parameterize is called" << std::endl;
}

Dog::Dog (const Dog& other){
    *this = other;
    std::cout << type << " copy constructor is called" << std::endl;
}

Dog::~Dog(){
    std::cout << type << " destructor is called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "haw haw!" << std::endl;
}