/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:38:33 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 11:41:46 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap(std::string name) : level(1), hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), name(name), meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "SC4P-TP -- activation in progress" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::srand(std::time(NULL) + std::clock());
	this->name = src.getName();
	*this = src;
}


ScavTrap::~ScavTrap(void)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "SC4P-TP -- desactivation !" << std::endl;

	return ;
}


bool ScavTrap::notDead(void) const
{
	if (this->hitPoints > 0) {
		return true;
	}
	else {
		return false;
	}
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

void ScavTrap::takeDamage(unsigned int amount)
{
	int dmg = (int)(this->hitPoints - (amount - this->armorDamageReduction)) >= 0 ? (amount - this->armorDamageReduction) : this->hitPoints;

	this->hitPoints = (int)(this->hitPoints - (amount - this->armorDamageReduction)) >= 0 ? this->hitPoints - (amount - this->armorDamageReduction) : 0;
	std::cout << "SC4P-TP " << this->name << " hit by an asshole enemy and loose " << dmg << " hit points !" << std::endl;

	return ;

}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoints = this->hitPoints + amount <= this->maxHitPoints ? (this->hitPoints + amount) : this->maxHitPoints;
	std::cout << "SC4P-TP " << this->name << " drink a bottle of oil, he earn " << this->hitPoints << " points !" << std::endl;

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

unsigned int 	ScavTrap::getLevel(void) const
{
	return this->level;
}

unsigned int 	ScavTrap::gethitPoints(void) const
{
	return this->hitPoints;

}

unsigned int 	ScavTrap::getmaxHitPoints(void) const
{
	return this->maxHitPoints;

}

int 			ScavTrap::getenergyPoints(void) const
{
	return this->energyPoints;

}

int 			ScavTrap::getmaxEnergyPoints(void) const
{
	return this->maxEnergyPoints;

}

int 			ScavTrap::getmeleeAttackDamage(void) const
{
	return this->meleeAttackDamage;

}

int 			ScavTrap::getrangedAttackDamage(void) const
{
	return this->rangedAttackDamage;

}

int 			ScavTrap::getarmorDamageReduction(void) const
{
	return this->armorDamageReduction;

}

std::string 	ScavTrap::getName(void) const
{
	return this->name;
}
