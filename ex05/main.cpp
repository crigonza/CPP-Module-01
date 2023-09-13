/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:23:49 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/13 18:23:46 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(void)
{
    Harl    jarl;

    jarl.complain("DEBUG");
    std::cout << std::endl;
    jarl.complain("INFO");
    std::cout << std::endl;
    jarl.complain("WARNING");
    std::cout << std::endl;
    jarl.complain("ERROR");
}