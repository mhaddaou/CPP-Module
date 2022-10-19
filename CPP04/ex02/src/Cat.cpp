/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:04:41 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/18 00:34:55 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(){
    type = "Cat";
    _brain = new Brain();
    std::cout << type << " default constructor is called " << std::endl;
}
Cat::Cat(std::string _type): Animal(_type){
    type = _type;
    _brain = new Brain();
    std::cout << type << " parameterize constructor is called " << std::endl;    
}


Cat::Cat(Cat const &other): Animal(other)
{
	// *this = other;
    Animal::operator=(other);
	this->_brain = new Brain(*other._brain);
	std::cout << type << " copy constructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    type = other.type;
    *this->_brain = *other._brain;
    std::cout << type << " copy assignemet operator is called " << std::endl;
    return (*this);
}


Cat::~Cat(){
    delete _brain;
    std::cout << type << " destructor is called" << std::endl;
}


void Cat::makeSound() const {
    std::cout << "meow!" << std::endl;
}

void	Cat::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}
Brain &Cat::getBrain(void) const
{
	return (*this->_brain);
}