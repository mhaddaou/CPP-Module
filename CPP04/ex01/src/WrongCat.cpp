/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:58:45 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 11:03:25 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(){
    _type = "WrongCat";
    std::cout << _type << " Default constructor is called" << std::endl;
}

WrongCat::WrongCat(std::string type){
    _type = type;
    std::cout << _type << " parameterize constructor is called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other){
    *this = other;
}

WrongCat::~WrongCat(){
    std::cout << _type << " destructor is called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << _type << " meow meow " << std::endl;
}
