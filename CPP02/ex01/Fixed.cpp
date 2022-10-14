/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:36:52 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/13 18:02:06 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
}
Fixed::Fixed (const Fixed& obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPoint = obj.getRawBits();
    return (*this);
}


void Fixed::setRawBits( int const raw ){
    this->_fixedPoint = raw;   
}
Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    return (this->_fixedPoint);
}

Fixed::Fixed(const int number){
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = (number << this->_bits);
}

Fixed::Fixed(const float number){
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = int(roundf(number * (1 << this->_bits)));

}

float Fixed::toFloat(void) const{
    return ((float)this->_fixedPoint / (1 << this->_bits));
}

int Fixed::toInt(void) const{
    return ((int)this->_fixedPoint >> this->_bits);
}

std::ostream& operator<<(std::ostream&op, const Fixed &obj){
    op << obj.toFloat();
    return (op);
}