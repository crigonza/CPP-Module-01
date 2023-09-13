/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:51:56 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/12 20:13:52 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int     main(int argc, char **argv)
{
    std::string     filename, s1, s2, line;
    size_t          pos;
    
    if (argc != 4)
    {
        std::cout << "Invalid arguments number. Usage ./replace <filename> <s1> <s2>";
        std::cout << std::endl;
        return (1);
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    std::ifstream   filein(filename);
    if (!filein)
    {
        std::cout << "Input file error!" << std::endl;
        return (1);
    }
    std::ofstream   fileout(filename + ".replace");
    if (!fileout)
    {
        std::cout << "Output file error!" << std::endl;
        return (1);
    }

    while (std::getline(filein, line))
    {
        pos = 0;
        while((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        fileout << line << std::endl;
    }
    filein.close();
    fileout.close();

    return (0);
}