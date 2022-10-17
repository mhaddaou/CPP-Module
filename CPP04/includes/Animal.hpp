/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:56:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 04:20:18 by mhaddaou         ###   ########.fr       */
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
        ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};


#endif