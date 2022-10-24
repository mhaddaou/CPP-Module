/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:41:08 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/24 15:55:46 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(){}
Intern::Intern (const Intern& other){
    *this = other;
}
Intern& Intern::operator=(const Intern& other){
    return (*this);   
}
Intern::~Intern(){}

Form* Intern::robotomy(std::string target)const {
    Form *form = new RobotomyRequestForm(target);
    return (form);
}
Form* Intern::shrubbery(std::string target)const {
    Form* form = new ShrubberyCreationForm(target);
    return (form);
}
Form* Intern::presidential(std::string target)const {
    Form *form = new PresidentialPardonForm(target);
    return (form);
}

Form *Intern::makeForm(std::string nameForm, std::string targetForm) const{
    
    Form *form;
    int i = 0;
    std::string Forms[]{
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };
    Form* (Intern::*ptrFuncs[3])(std::string){
        &Intern::robotomy(targetForm),
        &Intern::shrubbery(targetForm),
        &Intern::presidential(targetForm)
    };
    while(Forms[i] != nameForm)
        i++;
    std::cout <<" i == " << i << std::endl;
    return form;    
}