/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/24 15:31:28 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
int main (){

	// ShrubberyCreationForm: Required grades: sign 145, exec 137

	// std::cout << "ShrubberyCreationForm" << std::endl;
	// {
	// 	ShrubberyCreationForm med("med");
	// 	Bureaucrat MED("med", 45);
	// 	try{
	// 		med.beSigned(MED);
	// 		med.execute(MED);
	// 		MED.executeForm(med);
	// 	}
	// 	catch(std::exception & e){
	// 	std::cerr << e.what() << std::endl;	
	// 	}
	// }
	
	// RobotomyRequestForm med("nice");
	// Bureaucrat ll("med", 46);
	// try{
	// 	med.beSigned(ll);
	// 	med.execute(ll);
	// }
	// catch(std::exception& e){
	// 	std::cerr << e.what() << std::endl;
	// }
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	
}