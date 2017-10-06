/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:38:33 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 17:21:53 by amoinier         ###   ########.fr       */
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
	this->name = FragTrap::name;
	this->hitPoints = FragTrap::hitPoints;
	this->maxHitPoints = FragTrap::maxHitPoints;
	this->energyPoints = FragTrap::energyPoints;
	this->maxEnergyPoints = FragTrap::maxEnergyPoints;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;;
	this->armorDamageReduction = FragTrap::armorDamageReduction;;

	std::srand(std::time(NULL) + std::clock());
	std::cout << "SUPER-TP -- Go go Power Rangers !" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src.getName()), NinjaTrap(src.getName()), FragTrap(src.getName())
{
	this->level = 1;
	this->name = FragTrap::name;
	this->hitPoints = FragTrap::hitPoints;
	this->maxHitPoints = FragTrap::maxHitPoints;
	this->energyPoints = FragTrap::energyPoints;
	this->maxEnergyPoints = FragTrap::maxEnergyPoints;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;;
	this->armorDamageReduction = FragTrap::armorDamageReduction;;
	std::srand(std::time(NULL) + std::clock());
	*this = src;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUPER-TP -- ..." << std::endl;

	return ;
}
