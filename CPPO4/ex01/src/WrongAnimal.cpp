/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:06:01 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 10:52:16 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("animal"){
    std::cout << "WrongAnimal default constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
    std::cout << "WrongAnimal parameterize constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal& other){
    *this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    this->_type = other._type;
    return (*this);
}
WrongAnimal::~WrongAnimal(){
    std::cout << " WrongAnimal destructor is called " << std::endl;
}
std::string WrongAnimal::getType() const {
    return (_type);
}

void WrongAnimal::makeSound() const {
    std::cout << "wrong animal make a sound !" << std::endl;
}