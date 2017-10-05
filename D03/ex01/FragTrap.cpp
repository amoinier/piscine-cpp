/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:04:55 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 11:03:08 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap& FragTrap::operator=(FragTrap const & rhs)
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

FragTrap::FragTrap(std::string name) : level(1), hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), name(name), meleeAttackDamage(30), rangedAttackDamage(20), armorDamageReduction(5)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "FR4G-TP -- start bootup sequence." << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "FR4G-TP -- Autodestruction activate." << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::srand(std::time(NULL) + std::clock());
	this->name = src.getName();
	*this = src;
}


bool FragTrap::notDead(void) const
{
	if (this->hitPoints > 0) {
		return true;
	}
	else {
		return false;
	}
}

void FragTrap::rangedAttack(std::string const & target)
{
	if (this->notDead()) {
		std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage !" << std::endl;
	}
	else {
		std::cout << "FR4G-TP is a heap of mechanical parts, asshole" << std::endl;
	}

	return ;
}

void FragTrap::meleeAttack(std::string const & target)
{
	if (this->notDead()) {
		std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage !" << std::endl;
	}
	else {
		std::cout << "FR4G-TP is a heap of mechanical parts, asshole !" << std::endl;
	}

	return ;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int dmg = (int)(this->hitPoints - (amount - this->armorDamageReduction)) >= 0 ? (amount - this->armorDamageReduction) : this->hitPoints;

	this->hitPoints = (int)(this->hitPoints - (amount - this->armorDamageReduction)) >= 0 ? this->hitPoints - (amount - this->armorDamageReduction) : 0;
	std::cout << "FR4G-TP " << this->name << " take " << dmg << " points of damage !" << std::endl;

	return ;

}

void FragTrap::beRepaired(unsigned int amount)
{
	this->hitPoints = this->hitPoints + amount <= this->maxHitPoints ? (this->hitPoints + amount) : this->maxHitPoints;
	std::cout << "FR4G-TP " << this->name << " was repaired, his life is now at " << this->hitPoints << " points !" << std::endl;

	return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string randomAttacks[5] = {"Roar of Time", "Aura Sphere", "Stealth Rock", "Earthquake", "Shell Smash"};

	if (this->notDead()) {
		if (this->energyPoints >= 25) {
			this->energyPoints -= 25;
			std::cout << "FR4G-TP " << this->name << " use " << randomAttacks[rand() % 5] << " on " << target << " !" << std::endl;
		}
		else {
			std::cout << "Out of energy, bitch" << std::endl;
		}
	}
	else {
		std::cout << "FR4G-TP is a heap of mechanical parts, asshole" << std::endl;
	}

	return ;
}

unsigned int 	FragTrap::getLevel(void) const
{
	return this->level;
}

unsigned int 	FragTrap::gethitPoints(void) const
{
	return this->hitPoints;

}

unsigned int 	FragTrap::getmaxHitPoints(void) const
{
	return this->maxHitPoints;

}

int 			FragTrap::getenergyPoints(void) const
{
	return this->energyPoints;

}

int 			FragTrap::getmaxEnergyPoints(void) const
{
	return this->maxEnergyPoints;

}

int 			FragTrap::getmeleeAttackDamage(void) const
{
	return this->meleeAttackDamage;

}

int 			FragTrap::getrangedAttackDamage(void) const
{
	return this->rangedAttackDamage;

}

int 			FragTrap::getarmorDamageReduction(void) const
{
	return this->armorDamageReduction;

}

std::string 	FragTrap::getName(void) const
{
	return this->name;
}
