/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:49:54 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/28 14:48:05 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Classes.hpp"

Base::~Base(){}

Base * generate(void){
	
	srand(time(0));
    int random = rand() % 3;
		
    	switch (random)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	case 2:
		return (new C());
		break;
	default:
		perror("Something went wrong with the random generator");
		return (NULL);
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != 0)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != 0)
		std::cout << "C" << std::endl;
}

void identify (Base& p){
	A a;
	B b;
	C c;
	try{
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}catch (std::exception& e)	{}
	try{
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}catch(std::exception& e)	{}
	try {
		c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}catch(std::exception& e){}
}
