/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:27:25 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/28 12:24:33 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
    std::cout << std::endl;
    std::cout << "picklespecial-ketchup burger. I really do!";
    std::cout << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did,";
    std::cout << std::endl;
    std::cout << "I wouldn’t be asking for more!";
    std::cout << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << std::endl;
    std::cout << "I’ve been coming for years whereas you started";
    std::cout << std::endl;
    std::cout << "working here since last month.";
    std::cout << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*ptrs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string     levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while(i < 4 && levels[i].compare(level) != 0)
        i++;
    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*ptrs[i++])();
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*ptrs[i++])();
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*ptrs[i++])();
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*ptrs[i++])();
            std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]";
        std::cout << std::endl;
        break;
    }
}