/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:36:52 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/13 20:04:04 by mhaddaou         ###   ########.fr       */
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

bool Fixed::operator>(const Fixed &obj) const{
    return (this->_fixedPoint > obj._fixedPoint);
}
bool Fixed::operator<(const Fixed &obj) const{
    return (this->_fixedPoint < obj._fixedPoint);
}
bool Fixed::operator>=(const Fixed &obj) const{
    return (this->_fixedPoint >= obj._fixedPoint);
}
bool Fixed::operator<=(const Fixed &obj) const{
    return (this->_fixedPoint <= obj._fixedPoint);
}
bool Fixed::operator==(const Fixed &obj) const{
    return (this->_fixedPoint == obj._fixedPoint);
}
bool Fixed::operator!=(const Fixed &obj) const{
    return (this->_fixedPoint != obj._fixedPoint);
}
Fixed& Fixed::operator=(const Fixed& obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPoint = obj.getRawBits();
    return (*this);
}

Fixed& Fixed::operator+(const Fixed& obj){
    Fixed op(*this);
    op.setRawBits(this->_fixedPoint + obj.getRawBits());
    return (op);
}
Fixed& Fixed::operator-(const Fixed& obj){
    Fixed op(*this);
    op.setRawBits(this->_fixedPoint - obj.getRawBits());
    return (op);
}
Fixed& Fixed::operator*(const Fixed& obj){
    Fixed op(*this);
    op.setRawBits(this->_fixedPoint * obj.getRawBits());
    return (op);
}
Fixed& Fixed::operator/(const Fixed& obj){
    Fixed op(*this);
    op.setRawBits(this->_fixedPoint / obj.getRawBits());
    return (op);
}
Fixed Fixed::operator ++ (int){
    std::cout << this->_fixedPoint << std::endl;
    this->_fixedPoint++;
    return (*this);
}
Fixed Fixed::operator ++ (){
    this->_fixedPoint++;
    std::cout << this->_fixedPoint << std::endl;
    return (*this);
}
Fixed Fixed::operator -- (int){
    std::cout << this->_fixedPoint << std::endl;
    this->_fixedPoint--;
    return (*this);
}
Fixed Fixed::operator -- (){
    this->_fixedPoint--;
    std::cout << this->_fixedPoint << std::endl;
    return (*this);
}


