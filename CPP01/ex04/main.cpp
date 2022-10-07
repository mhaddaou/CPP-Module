/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:46:09 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 18:55:13 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void readAndRemplaceFile(Sed *sed)
{
    std::string contentFile;
    int found;

    std::ifstream MyReadFile(sed->getFileName());
    if (!MyReadFile){
        std::cout << "Error\n \t Your file cannot be open!" << std::endl;
        exit(EXIT_FAILURE);
    }
    if (sed->is_empty(MyReadFile)){
        std::cout << "Error\n \t Your file is empty!" << std::endl;
        exit(EXIT_FAILURE);
    }   
    std::ofstream MyFile(sed->getFileName() + ".replace");
    if (!MyFile){
        std::cout << "Error\n \t The new file cannot be open! " << std::endl;
        exit(EXIT_FAILURE);
    }
    while (getline(MyReadFile,contentFile)){
        found = contentFile.find(sed->getS1());
        std::cout << "is found in the index " << found << std::endl;
        if (found > 0)
        {
            .substr(found, sed->getS1().length());
            std::cout << contentFile << std::endl;
        }
        contentFile.push_back('\n');
        MyFile << contentFile;
    }
    MyReadFile.close();
    MyFile.close(); 
}
int main (int ac, char **av)
{
    if (ac != 4)
        std::cout << "wrong in the arguments" << std::endl;
    else{
        Sed sed(av[1], av[2], av[3]);
        
        readAndRemplaceFile(&sed);
        
               
    }
}