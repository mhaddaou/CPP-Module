/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:06:13 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/18 10:08:49 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"


int main ()
{
	// const Animal	*(animal_array[100]);
	// std::cout << std::endl;
	// // Half filled with dogs
	// for (int i = 0; i < 50; i++)
	// 	animal_array[i] = new Dog();
	// std::cout << std::endl;

	// // Half filled with cats
	// for (int i = 2; i < 50; i++)
	// 	animal_array[i] = new Cat();
	// std::cout << std::endl;
	// {
	// 	Brain * bre = new Brain();
		
	// 	for (int i = 0; i < 100; i++){
	// 		bre->setIdea("mohamed", i);
	// 	}
	// 	std::cout << bre->getIdea(0) << std::endl;
	// 	std::cout << bre->getIdea(90) << std::endl;

	// 	delete bre;
		
	// }
	
	
	
	// std::cout << "-------------------------------------\n";
	// {
	// 	std::cout << "Check deep copy of Dog class using copy constructor:\n" << std::endl;
	// 	Dog *dogA = new Dog;
	// 	Dog *dogB = new Dog(*dogA);

	// 	delete dogA;
	// 	delete dogB;
	// }
	// std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using assignment operator overload:\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog;

		*dogA = *dogB;
		delete dogA;
		delete dogB;
	}
	// std::cout << "-------------------------------------\n";
	{
		// std::cout << "Check deep copy of Cat class using copy constructor:\n" << std::endl;
		// Cat *catA = new Cat;
		// Cat *catB = new Cat(*catA);

		// delete catA;
		// std::cout << "hadi " << std::endl;
		// catB->makeSound(); 
		// delete catB;
	}
	// std::cout << "-------------------------------------\n";
	// {
	// 	std::cout << "Check deep copy of Cat class using assignment operator overload:\n" << std::endl;
	// 	Cat *catA = new Cat;
	// 	Cat *catB = new Cat;

	// 	*catA = *catB;
	// 	delete catA;
	// 	delete catB;
	// }
}