/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:04:41 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 03:21:21 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(){
    type = "Cat";
}

std::string Cat::getType(){
    return (type);
}

void Cat::makeSound(){
    std::cout << "the cat sound!" << std::endl;
}