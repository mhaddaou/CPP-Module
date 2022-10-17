/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:58:48 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 01:33:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(std::string _type);
        Cat (const Cat& _other);
        using Animal::operator= ;
        ~Cat();
        void makeSound() const;
        
    
};

#endif