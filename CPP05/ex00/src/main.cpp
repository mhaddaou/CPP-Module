/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/19 23:56:01 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

  int main()
{
	Bureaucrat b("mohamed", 2);
	Bureaucrat d;

	try
	{
		// b.incrementBureaucrat();
	    Bureaucrat c("haddaoui", 0);
		// b.incrementBureaucrat();
        std::cout << c.getName() << std::endl;
        c.decrementBureaucrat();
		std::cout << c << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Bureaucrat " << e.what() << '\n';
	}
	return 0;
}