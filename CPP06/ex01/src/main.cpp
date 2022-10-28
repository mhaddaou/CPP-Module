/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 07:10:19 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/28 03:04:38 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

struct Data{
    int i;
    char c;
    float f;
    bool bl;
};


uintptr_t serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}

int main (){
    Data one;
    uintptr_t ser;
    Data *two;
    one.c = 97;
    one.i = 10;
    one.f = 4.5;
    one.bl = true;
    ser = serialize(&one);
    two = deserialize(ser);
    if (two->bl == true)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    std::cout << two->i << std::endl;
    std::cout << two->f << std::endl;
    std::cout << two->c << std::endl;
    
    
}