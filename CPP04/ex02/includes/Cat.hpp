/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:58:48 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 18:50:04 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(std::string _type);
        Cat(Cat const &other);
        Cat& operator=(const Cat& _other);
        ~Cat();
        void makeSound() const;
        void setBrain(Brain const &Brain);
        Brain & getBrain(void) const;
    private:
        Brain* _brain;
        
    
};

#endif