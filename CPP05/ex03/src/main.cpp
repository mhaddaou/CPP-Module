/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/25 01:52:53 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
int main (){
	
	Intern someRandomIntern;
	Form* rrf;
	
	try{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "med");
		delete rrf;	
	}
	catch(std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	
}