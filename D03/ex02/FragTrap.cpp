/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:04:55 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 11:38:11 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

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

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src.getName())
{
	std::srand(std::time(NULL) + std::clock());
	*this = src;
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
