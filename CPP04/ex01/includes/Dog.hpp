/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:00:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 17:37:01 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(std::string _type);
        Dog (const Dog& other);
        Dog& operator=(const Dog & other);
        ~Dog();
        void makeSound() const;
    private:
        Brain* _brain;
};

#endif