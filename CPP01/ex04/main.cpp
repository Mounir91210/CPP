/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modavid <modavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:47:21 by modavid           #+#    #+#             */
/*   Updated: 2025/07/02 01:20:37 by modavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string    replace(std::string file, std::string s1, std::string s2)
{
    std::size_t pos = 0;
    std::size_t debut = 0;
    std::string res;
    if ((pos = file.find(s1, debut)) == std::string::npos)
        return (file);
    else
    {
        while (pos != std::string::npos)
        {
            res += file.substr(debut, pos - debut);
            std::cout << "there is " << pos << std::endl;
            res += s2;
            std::cout << "there isnt " << res << std::endl;
            debut = pos + s1.length();
            pos = file.find(s1, debut);
        }
    }
    std::cout << "file = " << file << std::endl;
    return (res);
}

int main(int ac, char **av)
{
    std::string newfile;

    if (ac != 4)
    {
        std::cerr << "Bad arguments" << std::endl;
        return (1);
    }
    std::ifstream inFile(av[1]);
    if (!inFile)
    {
        std::cerr << "Error open file" << std::endl;
        return (1);
    }
    std::ofstream outFile("newfile.replace");
    if (!outFile)
    {
        std::cerr << "Error open file" << std::endl;
        inFile.close();
        return (1);
    }
    while (std::getline(inFile, newfile))
    {
        std::cout << "newfile = " << newfile << std::endl;
        newfile = replace(newfile, av[2], av[3]);
        std::cout << "newfile 2 = " << newfile << std::endl;
        outFile << newfile << std::endl;
    }
    inFile.close();
    outFile.close();
    return (0);
}
