/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:35:19 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/19 22:22:33 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"){
    this->_grade = 100;
}

Bureaucrat::Bureaucrat(const std::string name , int grade) : _name(name){
            _grade = grade;
}

Bureaucrat::Bureaucrat(int grade, const std::string name) : _name(name){
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& other){
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
    _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(){
    std::cout << "this Bureaucrat is die" << std::endl;
}
int Bureaucrat::getGrade()const {
    return (this->_grade);
}

std::string Bureaucrat::getName()const {
    return (this->_name);
}

Bureaucrat Bureaucrat::operator ++ (int){
    this->_grade++;
    return (*this);
}
Bureaucrat Bureaucrat::operator -- (int){
    this->_grade--;
    return (*this);
}

void Bureaucrat::incrementBureaucrat(){
    this->_grade--;
}

void Bureaucrat::decrementBureaucrat(){
    this->_grade++;
}

std::ostream&operator<<(std::ostream& op, const Bureaucrat & other){
    
    op << other.getName() << " Bureaucrat grade " << other.getGrade() << std::endl;
    return (op);
}
