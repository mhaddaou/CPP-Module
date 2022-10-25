/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:17:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/25 02:20:19 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

  int main()
{

	try
	{
	    Bureaucrat c("haddaoui", 1);
		c.incrementBureaucrat();
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