/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:00:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 18:50:00 by mhaddaou         ###   ########.fr       */
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
        Dog(Dog const &other);
        Dog& operator=(const Dog & other);
        ~Dog();
        void setBrain(Brain const &Brain);
        Brain & getBrain(void) const;
        void makeSound() const;
    private:
        Brain* _brain;
};

#endif