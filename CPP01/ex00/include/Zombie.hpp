/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:57:16 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/09/24 14:08:53 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void getName(std::string str);
        void announce( void );
        Zombie(std::string name);
        ~Zombie();
};

//function

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif