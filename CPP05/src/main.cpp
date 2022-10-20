/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/19 23:23:14 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main (){
    
    const Bureaucrat med("MED", 45);
        try
    {
        if ( med.getGrade() > 150)
            throw Bureaucrat::GradeTooHighException();
        else if (med.getGrade() < 1)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (std::exception & e)
    {
        e.what();
    }
}