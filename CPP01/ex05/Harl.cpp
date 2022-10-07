/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:05:21 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 18:06:00 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL"
                << "-double-cheese-triple-pickle-specialketchup burger."
                    <<  "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money."
                <<" You didn’t put enough bacon in my burger! If you did,"
                <<" I wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." 
                <<" I’ve been coming for years whereas you started working"
                <<" here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout <<"This is unacceptable! I want to" 
                <<" speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string components[] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    void (Harl::*ptrFuncs[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    while (i < 4)
    {
        if (components[i] == level){
            (this->*ptrFuncs[i])();
            break;
        }
        i++;
    }
}

Harl::~Harl(){}