/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:54:33 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/07 09:04:18 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _pointsAP(40)
{

	return ;
}

Character::Character(Character const & src)
{
	*this = src;

	return ;
}

Character::~Character(void)
{

	return ;
}


Character& Character::operator=(Character const & rhs)
{
	this->setName(rhs.getName());
	this->setPointAP(rhs.getPointsAP());
	this->equip(rhs.getWeapon());

	return *this;
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.haveWeapon()) {
		o << rhs.getName() <<" has " << rhs.getPointsAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	}
	else {
		o << rhs.getName() <<" has " << rhs.getPointsAP() << " AP and is unarmed" << std::endl;
	}

	return o;
}


void Character::recoverAP()
{
	if (this->getPointsAP() + 10 <= 40) {
		this->setPointAP(this->getPointsAP() + 10);
	}
	else {
		this->setPointAP(40);
	}

	return ;
}

void Character::equip(AWeapon* weap)
{
	this->_weapon = weap;
	this->setHaveWeapon(true);

	return ;
}

void 			Character::setName(std::string name)
{
	this->_name = name;

	return ;
}

void 			Character::setPointAP(int pointsAP)
{
	this->_pointsAP = pointsAP;
}

void 			Character::setHaveWeapon(bool wep)
{
	this->_haveWeapon = wep;

	return ;
}


void Character::attack(Enemy* &enem)
{
	if (enem && enem != NULL && enem != 0) {
		if (this->haveWeapon() && this->_pointsAP >= this->_weapon->getAPCost()) {
			this->setPointAP(this->_pointsAP - this->_weapon->getAPCost());
			std::cout << this->getName() << " attacks " << enem->getType() << " with a " << this->_weapon->getName() << std::endl;
			this->_weapon->attack();
			enem->takeDamage(this->_weapon->getDamage());
			if (enem->getHP() == 0) {
				std::cout << enem->getType() << " is dead" << std::endl;
				delete enem;
				enem = NULL;
			}

			return ;
		}
		else {
			if (this->haveWeapon()) {
				std::cout << "Can't attack, Not enough AP" << std::endl;
			}
			else {
				std::cout << "Can't attack, No weapon" << std::endl;
			}
		}
	}
	else {
		std::cout << "Don't touch a dead body !" << std::endl;
	}

	return ;
}

std::string 	 Character::getName() const
{
	return this->_name;
}

AWeapon* 		Character::getWeapon() const
{
	return this->_weapon;
}

int 			Character::getPointsAP() const
{
	return this->_pointsAP;
}

bool			Character::haveWeapon() const
{
	return this->_haveWeapon;
}
