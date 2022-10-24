/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:19:46 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/24 15:10:51 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Default form", 25, 5){
    _target = "Default name";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("presidential", 25, 5){
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm & other) : Form(other){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&other){
    this->_target = other._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

std::string PresidentialPardonForm::getTarget() const{
    return (_target);
}
void PresidentialPardonForm::execute(Bureaucrat const &executor)const{
    if (executor.getGrade() > this->getGradeToexecuted())
        throw GradeTooLowException();
    if (this->getIsSigned() == false)
        throw FormIsnotSigned();
    else{
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}