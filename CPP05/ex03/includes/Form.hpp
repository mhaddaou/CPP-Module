/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:51:45 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/25 01:51:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
class Bureaucrat;

class Form{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSigned;
        const int _gradeToexecuted;
    public:
        Form();
        Form(const std::string name, const int gs, const int ge);
        Form (const Form& other);
        Form& operator=(const Form& other);
        virtual ~Form();
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSigned() const;
        int getGradeToexecuted() const;
        class GradeTooHighException: public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class FormIsnotSigned : public std::exception{
            public:
                virtual const char * what() const throw();
        };
        class FormNotFound: public std::exception{
            public:
                virtual const char * what() const throw();
        };
        void beSigned(Bureaucrat& bureaucrat);
        void signForm(Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator <<(std::ostream& op, const Form & other);
#endif