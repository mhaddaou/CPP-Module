/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:04:41 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 01:42:02 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(){
    type = "Cat";
    std::cout << type << " default constructor is called " << std::endl;
}
Cat::Cat(std::string _type){
    type = _type;
    std::cout << type << " parameterize constructor is called " << std::endl;    
}

Cat::Cat(const Cat& other){
    *this = other;
    std::cout << type << " copy constructor is called " << std::endl;
}

Cat::~Cat(){
    std::cout << type << " destructor is called" << std::endl;
}


void Cat::makeSound() const {
    std::cout << "meow!" << std::endl;
}