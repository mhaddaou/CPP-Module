/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:56:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 17:41:26 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{
    protected:
        std::string  type;
    public:
        Animal();
        Animal(std::string _type);
        Animal (const Animal &other);
        Animal& operator=(const Animal &other);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};


#endif