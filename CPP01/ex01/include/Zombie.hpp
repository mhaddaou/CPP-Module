/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:23:23 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/25 11:55:07 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <memory>

class Zombie{
    private:
        std::string name;
    public:
        void announce();
        void setName(std::string name);
        void getName(void);
        Zombie();
        ~Zombie();
};

//function

Zombie* zombieHorde( int N, std::string name );

#endif