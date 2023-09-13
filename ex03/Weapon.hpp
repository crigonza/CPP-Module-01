/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:40:21 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/11 20:51:12 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP

#define WEAPON_HPP

class   Weapon
{
    private:
        std::string     _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string   getType(void);
        void    setType(std::string type);
};

#endif  