/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:38:33 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:45:02 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap& SuperTrap::operator=(SuperTrap const & rhs)
{
	this->level = rhs.getLevel();
	this->hitPoints = rhs.gethitPoints();
	this->maxHitPoints = rhs.getmaxHitPoints();
	this->energyPoints = rhs.getenergyPoints();
	this->maxEnergyPoints = rhs.getmaxEnergyPoints();
	this->meleeAttackDamage = rhs.getmeleeAttackDamage();
	this->rangedAttackDamage = rhs.getrangedAttackDamage();
	this->armorDamageReduction = rhs.getarmorDamageReduction();

	return *this;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->level = 1;
	this->name = FragTrap::getName();
	this->hitPoints = FragTrap::gethitPoints();
	this->maxHitPoints = FragTrap::getmaxHitPoints();
	this->energyPoints = NinjaTrap::getenergyPoints();
	this->maxEnergyPoints = NinjaTrap::getmaxEnergyPoints();;
	this->meleeAttackDamage = NinjaTrap::getmeleeAttackDamage();;
	this->rangedAttackDamage = FragTrap::getrangedAttackDamage();;
	this->armorDamageReduction = FragTrap::getarmorDamageReduction();;

	std::srand(std::time(NULL) + std::clock());
	std::cout << "SUPER-TP -- Go go Power Rangers !" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src.getName()), NinjaTrap(src.getName()), FragTrap(src.getName())
{
	std::srand(std::time(NULL) + std::clock());
	*this = src;
}

SuperTrap::~SuperTrap(void)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "SUPER-TP -- ..." << std::endl;

	return ;
}
