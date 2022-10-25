/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/25 02:11:41 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main (){

	// ShrubberyCreationForm: Required grades: sign 145, exec 137

	std::cout << "ShrubberyCreationForm" << std::endl;
	{
		ShrubberyCreationForm med("wati9a");
		Bureaucrat MED("med", 45);
		try{
			med.beSigned(MED);
			med.execute(MED);
			MED.executeForm(med);
		}
		catch(std::exception & e){
		std::cerr << e.what() << std::endl;	
		}
	}
	// RobotomyRequestForm: Required grades: sign 72, exec 45
	std::cout << "RobotomyRequestForm" << std::endl;
	{
		RobotomyRequestForm med("med");
		Bureaucrat MED("med", 72);
		try{
			med.beSigned(MED);
			med.execute(MED);
			MED.executeForm(med);
		}
		catch(std::exception & e){
		std::cerr << e.what() << std::endl;	
		}
	}
	//PresidentialPardonForm: Required grades: sign 25, exec 5
	
	std::cout << "PresidentialPardonForm" << std::endl;
	{
		PresidentialPardonForm med("wati9a");
		Bureaucrat MED("med", 5);
		try{
			med.beSigned(MED);
			med.execute(MED);
			MED.executeForm(med);
		}
		catch(std::exception & e){
		std::cerr << e.what() << std::endl;	
		}
	}
}