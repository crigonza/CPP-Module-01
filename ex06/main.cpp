/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:48:16 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/13 19:25:33 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(int argc, char** argv)
{
    std::string     levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int     i = 0;
    Harl    harl;

    if (argc != 2)
    {
        std::cout << "Invalid arguments number!" << std::endl;
        return (1);
    }
    while(i < 4 && levels[i].compare(argv[1]) != 0)
        i++;
    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]";
        std::cout << std::endl;
        break;
    }
}   