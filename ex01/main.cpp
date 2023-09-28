/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:08:25 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/28 09:52:27 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    int     n;
    Zombie  *horde;

    n = 42;
    horde = zombieHorde(n, "Zombo");
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete [] horde;
}