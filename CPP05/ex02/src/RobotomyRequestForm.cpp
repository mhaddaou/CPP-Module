/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:44:17 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/23 17:43:47 by mhaddaou         ###   ########.fr       */
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
static int robot_fail = 0;

void RobotomyRequestForm::execute(Bureaucrat const &executor)const{
    if (executor.getGrade() > this->getGradeToexecuted())
        throw GradeTooLowException();
    else if (this->getIsSigned() == false)
        throw FormIsnotSigned();
    else if (robot_fail++ % 2)
		std::cout << "BRRRRRRRRRRRRRR\n" << this->getTarget() << " was robotomized" << std::endl;
    else
		std::cout << "Robotomy failed" << std::endl;
}