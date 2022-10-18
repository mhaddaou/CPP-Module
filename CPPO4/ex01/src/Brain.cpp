/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:56:25 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 18:51:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(){
    std::cout << "Brain defualt constructor is called" << std::endl;
}
Brain::Brain(const Brain& other){
    *this = other;
    std::cout << "Brain copy constructor is called" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
    std::copy(other.ideas, other.ideas + 100, this->ideas);
    std::cout << "Brain copy assignment operator is called" << std::endl;
    return (*this);
}
void	Brain::setIdea(std::string const &_idea, int const &index)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = _idea;
}

std::string const	&Brain::getIdea(int const &index) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (this->ideas[0]);
}
Brain::~Brain(){
    std::cout << "Brain destructor is called" << std::endl;
}