/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:35:19 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/19 23:17:17 by mhaddaou         ###   ########.fr       */
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
}

Bureaucrat::~Bureaucrat(){
    std::cout << "this Bureaucrat is die" << std::endl;
}
int Bureaucrat::getGrade(){
    return (this->_grade);
}

std::string Bureaucrat::getName(){
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
