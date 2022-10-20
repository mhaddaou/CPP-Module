/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:34:23 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/19 23:26:55 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
    private:
        const std::string _name;
        int               _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(int grade, const std::string name);
        Bureaucrat (Bureaucrat & other);
        Bureaucrat& operator=(const Bureaucrat & other);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        Bureaucrat operator ++ (int);
        Bureaucrat operator -- (int);
        void incrementBureaucrat() const;
        void decrementBureaucrat() const;
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw()
                {
                    return ("ERROR value too low \n");
                }
        };
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw()
                {
                    return ("error value too high \n");
                }
        };
};

ostream& operator << (ostream& output, Bureaucrat &other);

#endif