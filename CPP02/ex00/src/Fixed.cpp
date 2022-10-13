/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:57:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/13 22:49:54 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::Fixed(Fixed &obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed&  Fixed::operator=(const Fixed& obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = obj.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw){
    this->fixedPoint = raw;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}