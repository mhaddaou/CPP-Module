/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:12:06 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/17 18:02:34 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain (const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
        void setIdea(std::string const &_idea, int const &index);
        std::string const	&getIdea(int const &index) const ;
        
};


#endif