/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/19 22:24:59 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main (){
    
    std::string name = "MED";
    int grade = 5;
        try
    {
        if ( grade > 150)
            throw Bureaucrat::GradeTooHighException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooLowException();
        else
        {
            Bureaucrat med(grade, name);
            med.incrementBureaucrat();
            med.decrementBureaucrat();
            std::cout << med.getGrade() <<std::endl;
            std::cout << med.getName() << std::endl;
            std::cout << med;
        }
            
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
}