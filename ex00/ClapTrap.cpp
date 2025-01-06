/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:09:46 by skwon2            #+#    #+#             */
/*   Updated: 2025/01/06 20:38:55 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) 
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default Construtor" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destrutor" << std::endl;
}

