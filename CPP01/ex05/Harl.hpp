/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:05:18 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 18:08:58 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
    public:
        Harl();
        void complain( std::string level );
        ~Harl();
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif