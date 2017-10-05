/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:38:33 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:33:39 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap& NinjaTrap::operator=(NinjaTrap const & rhs)
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

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->level = 1;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;

	std::srand(std::time(NULL) + std::clock());
	std::cout << "NINJ4-TP -- arrive from an asian country." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src.getName())
{
	std::srand(std::time(NULL) + std::clock());
	*this = src;
}

NinjaTrap::~NinjaTrap(void)
{
	std::srand(std::time(NULL) + std::clock());
	std::cout << "NINJ4-TP -- disappear in the smoke..." << std::endl;

	return ;
}

void NinjaTrap::ninjaShoebox(ClapTrap & trap)
{
	if (this->notDead()) {
			std::cout << "NINJ4-TP can't recognize what Robot type is. punch " << trap.getName() << " twice !" << std::endl;
			this->meleeAttack(trap.getName());
			this->meleeAttack(trap.getName());
	}
	else {
		std::cout << "Of course, its a NINJ4-TP but it's not invincible ..." << std::endl;
	}

	return ;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & trap)
{
	if (this->notDead()) {
			std::cout << this->getName() << " try to sneak " << trap.getName() << " but he is so clever !" << std::endl;
			this->takeDamage(this->meleeAttackDamage / 2);
	}
	else {
		std::cout << "Of course, " << this->getName() << " is not invincible ..." << std::endl;
	}

	return ;
}

void NinjaTrap::ninjaShoebox(FragTrap & trap)
{
	if (this->notDead()) {
			std::cout << this->getName() << " attacks " << trap.getName() <<  " with an critical hit !" << std::endl;
			this->meleeAttack(trap.getName());
	}
	else {
		std::cout << "Of course, " << this->getName() << " is not invincible ..." << std::endl;
	}

	return ;
}

void NinjaTrap::ninjaShoebox(ScavTrap & trap)
{
	if (this->notDead()) {
			std::cout << "After 5 seconds, " << this->getName() << " hit " << trap.getName() << "." << std::endl;
			this->rangedAttack(trap.getName());
	}
	else {
		std::cout << "Of course, " << this->getName() << " is not invincible ..." << std::endl;
	}

	return ;
}

void NinjaTrap::rangedAttack(std::string const & target)
{
	if (this->notDead()) {
		std::cout << "NINJA-TP " << this->name << " user his range weapons on " << target << ", he loose " << this->rangedAttackDamage << " hit points !" << std::endl;
	}
	else {
		std::cout << "Of course, its a NINJ4-TP but it's not invincible ..." << std::endl;
	}

	return ;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	if (this->notDead()) {
		std::cout << "NINJA-TP " << this->name << " user his melee weapons on " << target << ", he loose " << this->rangedAttackDamage << " hit points !" << std::endl;
	}
	else {
		std::cout << "Of course, its a NINJ4-TP but it's not invincible ..." << std::endl;
	}

	return ;
}
