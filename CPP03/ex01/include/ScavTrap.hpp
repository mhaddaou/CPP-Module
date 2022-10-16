/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:43:11 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 14:58:35 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "../include/ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string _name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap &operator=(const ScavTrap & obj);
        ~ScavTrap();
        
        void attack(const std::string& target);
        void guardGate();
        
};

#endif