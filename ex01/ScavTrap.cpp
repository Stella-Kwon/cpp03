/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:12:29 by skwon2            #+#    #+#             */
/*   Updated: 2025/01/08 16:55:57 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Create ClapTrap with initializer list before the ScavTrap constructed.
ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
    // with private member u cannot access like this of course,
    // so that you have to change private to protected in order to access those like this way.
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is created." << std::endl;
};

ScavTrap::~ScavTrap(){
        std::cout << "ScavTrap " << _name << " is destroyed." << std::endl;
};

void ScavTrap::attack(const std::string& target){
   
    if (_hitPoints > 0 || _energyPoints > 0)
    {
        _energyPoints--;
        // don't know why the param is string target not the claptrap target.
         std::cout << "ScavTrap " << _name << " fiercely attacks " << target \
         << ", is inflicting " << _attackDamage << " points of damage!" << std::endl;
    }
    else {
        std::string hitOrEnergy = \
        (_hitPoints == 0 && _energyPoints == 0) ? "both points :  hitpoints\" & \"energypoints" \
        : (_hitPoints == 0 ? "hitpoints" : "energypoints");

        std::cout << "ScabTrap " << _name << " cannot attack :: it is insufficient " \
        << hitOrEnergy << "." << std::endl;
    }
    
};

void ScavTrap::guardGate(){
    
};

//https://cdn.intra.42.fr/pdf/pdf/78668/en.subject.pdf