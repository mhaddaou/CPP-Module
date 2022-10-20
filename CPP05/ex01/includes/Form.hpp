/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:41:51 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/20 17:18:10 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>


class Form{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeExecute;
    public:
        Form();
        Form(const std::string name, const int gradeToSign, const int gradeExecute);
        Form (Form  & other);
        Form& operator=(const Form& other);
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return ("Error \t is to high");
                } 
            
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what()  const throw(){
                    return ( "Error \t is to low");
                }
        };
        
};

std::ostream& operator << (std::ostream& op,Form& other);



#endif