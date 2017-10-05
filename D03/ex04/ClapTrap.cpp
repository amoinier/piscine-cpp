/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:38:33 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:15:34 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
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

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "Working on a new ClapTrap" << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::srand(std::time(NULL) + std::clock());
	this->name = src.getName();
	*this = src;
}


ClapTrap::~ClapTrap(void)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "Disassemble an old ClapTrap" << std::endl;

	return ;
}


bool ClapTrap::notDead(void) const
{
	if (this->hitPoints > 0) {
		return true;
	}
	else {
		return false;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int dmg = (int)(this->hitPoints - (amount - this->armorDamageReduction)) >= 0 ? (amount - this->armorDamageReduction) : this->hitPoints;

	this->hitPoints = (int)(this->hitPoints - (amount - this->armorDamageReduction)) >= 0 ? this->hitPoints - (amount - this->armorDamageReduction) : 0;
	std::cout << "CLAPTRAP: " << this->name << " hit by an asshole enemy and loose " << dmg << " hit points !" << std::endl;

	return ;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints = this->hitPoints + amount <= this->maxHitPoints ? (this->hitPoints + amount) : this->maxHitPoints;
	std::cout << "CLAPTRAP: " << this->name << " drink a bottle of oil, he earn " << this->hitPoints << " points !" << std::endl;

	return ;
}

unsigned int 	ClapTrap::getLevel(void) const
{
	return this->level;
}

unsigned int 	ClapTrap::gethitPoints(void) const
{
	return this->hitPoints;

}

unsigned int 	ClapTrap::getmaxHitPoints(void) const
{
	return this->maxHitPoints;

}

int 			ClapTrap::getenergyPoints(void) const
{
	return this->energyPoints;

}

int 			ClapTrap::getmaxEnergyPoints(void) const
{
	return this->maxEnergyPoints;

}

int 			ClapTrap::getmeleeAttackDamage(void) const
{
	return this->meleeAttackDamage;

}

int 			ClapTrap::getrangedAttackDamage(void) const
{
	return this->rangedAttackDamage;

}

int 			ClapTrap::getarmorDamageReduction(void) const
{
	return this->armorDamageReduction;

}

std::string 	ClapTrap::getName(void) const
{
	return this->name;
}
