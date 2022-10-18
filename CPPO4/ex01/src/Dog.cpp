/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:03:08 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/18 10:09:47 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Dog.hpp"

Dog::Dog(){
    type = "Dog";
    this->_brain = new Brain();
    std::cout << type << " constructor default is called" << std::endl;
}

Dog::Dog(std::string _type){
    type = _type;
    this->_brain = new Brain();
    std::cout << type << " constructor parameterize is called" << std::endl;
}


Dog::Dog(Dog const &other): Animal(other)
{
	this->_brain = new Brain(*other._brain);
    std::cout << type << " copy constructor is called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    this->type = other.type;
    *this->_brain = *other._brain;
    std::cout << type << " copy assignemet operator is called" << std::endl;
    return (*this);
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << type << " destructor is called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "haw haw!" << std::endl;
}