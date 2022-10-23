/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/23 00:47:21 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
int main (){
	RobotomyRequestForm med("nice");
	Bureaucrat ll("med", 44);
	
	try{
		med.beSigned(ll);
		med.signForm(ll);
		med.execute(ll);
		med.execute(ll);
		med.execute(ll);
		med.execute(ll);
		med.execute(ll);
		med.execute(ll);
		med.execute(ll);
		med.execute(ll);
	}
	catch(std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
}