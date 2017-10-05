/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:38:33 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:06:40 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;

	std::srand(std::time(NULL) + std::clock());
	std::cout << "SC4P-TP -- activation in progress" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src.getName())
{
	std::srand(std::time(NULL) + std::clock());
	*this = src;
}


ScavTrap::~ScavTrap(void)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "SC4P-TP -- desactivation !" << std::endl;

	return ;
}


void ScavTrap::challengeNewcomer(void)
{
	std::string randomAttacks[5] = {"Hide and Seek", "Kick the Can", "Capture the Flag", "Hopscotch", "Cat’s Cradle"};

	if (this->notDead()) {
			std::cout << "SC4P-TP " << this->name << " want to " << randomAttacks[rand() % 5] << " with newcomer !" << std::endl;
	}
	else {
		std::cout << "SC4P-TP is dead, what are you doing ?" << std::endl;
	}

	return ;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	if (this->notDead()) {
		std::cout << "SC4P-TP " << this->name << " user his range weapons on " << target << ", he loose " << this->rangedAttackDamage << " hit points !" << std::endl;
	}
	else {
		std::cout << "SC4P-TP is dead, what are you doing ?" << std::endl;
	}

	return ;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	if (this->notDead()) {
		std::cout << "SC4P-TP " << this->name << " user his melee weapons on " << target << ", he loose " << this->rangedAttackDamage << " hit points !" << std::endl;
	}
	else {
		std::cout << "SC4P-TP is dead, what vare you doing ?" << std::endl;
	}

	return ;
}
