/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/21 01:11:29 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main (){
	std::cout << "default constructor in Form-----------------" << std::endl << std::endl ;
	{
		try{
			Form *form = new Form();
			std::cout << form->getName() << std::endl;
			std::cout << *form << std::endl;
			delete form;
		}
		catch(std::exception& e){
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "parametrize constructor in form-------------" << std::endl << std::endl;
	{
		try{
			Form *f = new Form("MED", 10, 10);
			std::cout << f->getName() << std::endl;
			std::cout << f->getGradeToexecuted() << std::endl;
			std::cout << f->getGradeToSigned() << std::endl;
			std::cout << *f << std::endl;
			delete f;
		}
		catch(std::exception& r){
			std::cerr << r.what() << std::endl;
		}
	}
	std::cout << std::endl << "form grade is low ------------------------------------" << std::endl << std::endl;
	{
		try{
			Form *form = new Form("med", 500, 10);
			delete form;
		}
		catch(std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "Prog is contu..." << std::endl;
		
	}
	std::cout << std::endl << "form grade is high ------------------------------------" << std::endl << std::endl;
	{
		try{
			Form form("med", 0, 10);
		}
		catch(std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << "Prog is contu..." << std::endl;
		
	}
	std::cout << std::endl << "form is signed------------------------------------" << std::endl << std::endl;
	{
		try{
			Bureaucrat b("mohamed", 10);
			Form *form = new Form("haddaoui", 20, 10);
			form->beSigned(b);
			form->signForm(b);
			std::cout <<std::endl << *form << std::endl;
			delete form;
		}
		catch(std::exception& e){
			std::cerr << e.what() << std::endl;
		}	
	}
	std::cout << std::endl << "form isn't signed------------------------------------" << std::endl << std::endl;
	{
		try{
			Bureaucrat b("mohamed", 30);
			Form *form = new Form("haddaoui", 20, 10);
			std::cout <<std::endl << *form << std::endl;
			form->beSigned(b);
			form->signForm(b);
			delete form;
		}
		catch(std::exception& e){
			std::cerr << e.what() << std::endl;
		}	
	}
	
}