/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:03:08 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 03:15:48 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
}

std::string Dog::getType(){
    return (type);
}

void Dog::makeSound(){
    std::cout << "the dog sound!" << std::endl;
}