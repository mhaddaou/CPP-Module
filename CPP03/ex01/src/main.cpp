/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:50:29 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/16 11:22:09 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main ()
{
    ClapTrap med("med");
    med.attack("haddaoui");
    med.takeDamage(5);
    med.takeDamage(5);
    med.takeDamage(5);

}