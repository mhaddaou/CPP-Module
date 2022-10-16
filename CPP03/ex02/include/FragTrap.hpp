/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:48:57 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 15:57:48 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string _name);
        ~FragTrap();
        FragTrap (const FragTrap& obj);
        FragTrap &operator=(const FragTrap& obj);

        void highFivesGuys(void);
};


#endif