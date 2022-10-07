/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:46:09 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 16:40:03 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <cstdlib>

std::string searchAndReplace(std::string contenteFile, Sed *sed)
{
    int npos;
    
    npos = contenteFile.find(sed->getS1());
    if (npos != -1)
    {
        contenteFile.erase(npos, sed->getS1().length());
        contenteFile.insert(npos, sed->getS2());
    }
    return (contenteFile);
}

int readAndRemplaceFile(Sed *sed)
{
    std::string contentFile;
    std::string newFileName;

    newFileName = sed->getFileName().append(".replace");
    std::ifstream MyReadFile(sed->getFileName());
    if (!MyReadFile){
        std::cout << "Error\n \t Your file cannot be open!" << std::endl;
        exit(EXIT_FAILURE);
    }
    if (sed->is_empty(MyReadFile)){
        std::cout << "Error\n \t Your file is empty!" << std::endl;
        exit(EXIT_FAILURE);
    }   
    std::ofstream MyFile(newFileName);
    if (!MyFile){
        std::cout << "Error\n \t The new file cannot be open! " << std::endl;
        exit(EXIT_FAILURE);
    }
    if (checkS1AndS2(sed) == EXIT_FAILURE)
        return (EXIT_FAILURE);       
    while (getline(MyReadFile,contentFile)){
        contentFile = searchAndReplace(contentFile, sed);
        MyFile << contentFile << std::endl;
    }
    MyReadFile.close();
    MyFile.close();
    return (EXIT_SUCCESS); 
}

int  checkS1AndS2(Sed *sed)
{
    std::string _s1 = sed->getS1();
    std::string _s2 = sed->getS2();
    if (_s1.empty()){
        std::cout << "Error \n \t The string S1 is empty" << std::endl;
        return (EXIT_FAILURE);
    }
    if (_s2.empty()){
        std::cout << "Error \n \t The string S2 is empty" << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}

int main (int ac, char **av)
{
    if (ac != 4)
        std::cout << "wrong in the arguments" << std::endl;
    else{
        Sed sed(av[1], av[2], av[3]);
        if (readAndRemplaceFile(&sed) == EXIT_FAILURE)
            return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}