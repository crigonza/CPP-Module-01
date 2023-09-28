/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:23:04 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/28 10:01:31 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(void)
{
    std::string     brain = "HI THIS IS BRAIN";
    std::string     *stringPTR = &brain;
    std::string     &stringREF = brain;

    std::cout << "string memory address: " << &brain << std::endl;
    std::cout << "stringPTR memory address: " << stringPTR << std::endl;
    std::cout << "stringREF memory address: " << &stringREF << std::endl;
    std::cout << "string value : " << brain << std::endl;
    std::cout << "stringPTR value : " << *stringPTR << std::endl;
    std::cout << "stringREF value : " << stringREF << std::endl;
}