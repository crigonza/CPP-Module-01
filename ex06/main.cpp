/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:48:16 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/28 12:25:26 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid arguments number!" << std::endl;
        return (1);
    }
    Harl    harl;

    harl.complain(argv[1]);
    return (0);
}   