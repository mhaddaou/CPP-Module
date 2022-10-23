/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:44:17 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/23 18:15:07 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Default form", 72, 45){
    _target = "med";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45){
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm & other): Form(other){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
    _target = other._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

std::string RobotomyRequestForm::getTarget() const{
    return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)const{
    if (this->getIsSigned() == false)
        throw FormIsnotSigned();
    else if (executor.getGrade() > this->getGradeToexecuted())
		std::cout << "Robotomy failed" << std::endl;       
    else{
        std::cout << "BRRRRRRRRRRRRRR\n\t" << this->getTarget() << 
        " has been robotomized successfully 50% of the time." << std::endl;
    }
}