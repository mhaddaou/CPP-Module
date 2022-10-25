/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:41:08 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/25 01:49:31 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(){}
Intern::Intern (const Intern& other){
    *this = other;
}
Intern& Intern::operator=(const Intern& other){
    
    if (this == &other)
		return *this;
	return *this;  
}
Intern::~Intern(){}

Form* robotomy(std::string target){
    Form *form = new RobotomyRequestForm(target);
    return (form);
}
Form* shrubbery(std::string target) {
    return (new ShrubberyCreationForm(target));
}
Form* presidential(std::string target) {
    Form *form = new PresidentialPardonForm(target);
    return (form);
}

Form *Intern::makeForm(std::string nameForm, std::string targetForm){
    
    Form *form = NULL;
    int i = 0;
    std::string Forms[3]={
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };
    Form * (*ptrFuncs[])(std::string) = {
        &robotomy,
        &shrubbery,
        &presidential
    };
    while(Forms[i] != nameForm && i < 3)
        i++;
    if (i >= 0 && i < 3){
        form = (*ptrFuncs[i])(targetForm);
        std::cout << "Intern creates " << form->getName() << std::endl;
        return (form); 
    }
    throw Form::FormNotFound();
    return form;    
}