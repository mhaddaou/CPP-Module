/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:28:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/22 22:25:27 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():Form("Default Form", 145, 137){
    _target = "med";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145, 137){
    _target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : Form(other){}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    this->_target = other._target;
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
std::string ShrubberyCreationForm::getTarget() const{
    return (_target);
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor)const{
    if (executor.getGrade() > this->getGradeToexecuted())
        throw Form::GradeTooLowException();
    else if (this->getIsSigned() == false)
        throw Form::FormIsnotSigned();
    else{
        std::ofstream MyFile(this->getTarget().append("_shrubbery").c_str());
    MyFile << 
			"          #" << std::endl <<
			"         AAf" << std::endl <<
			"        d$b$f" << std::endl <<
			"       d$$@b$f" << std::endl <<
			"      d\\$$$ib$f" << std::endl <<
			"    .d$$$\\$$$b$f" << std::endl <<
			"   .d$$@$$$$\\$$ibf" << std::endl <<
			"   dfdd$$i$$b####$f" << std::endl <<
			"  d\\$$$$@$@#!$$$$$$f"<< std::endl <<
			" ddd$@$$\\$$$$$@b.$$$f" << std::endl <<
			"dd$$$$i$$$\\$$$$$$b.$$f" << std::endl <<
			"        #####" << std::endl <<
			"        #####" << std::endl <<
			"        #####" << std::endl << std::endl;

		MyFile.close();
	}
}   
