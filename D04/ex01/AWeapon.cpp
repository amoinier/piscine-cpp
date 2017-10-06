/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:26:24 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 15:23:10 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damagePoints(damage), _costAP(apcost)
{

	return ;
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;

	return ;
}

AWeapon::~AWeapon(void)
{

	return ;
}


AWeapon& AWeapon::operator=(AWeapon const & rhs)
{
	this->setName(rhs.getName());
	this->setAPCost(rhs.getAPCost());
	this->setDamage(rhs.getDamage());

	return *this;
}


std::string /*[...]*/ AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_costAP;

}

int AWeapon::getDamage() const
{

	return this->_damagePoints;
}

void 			AWeapon::setName(std::string name)
{
	this->_name = name;

	return ;
}

void 			AWeapon::setAPCost(int costAP)
{
	this->_costAP = costAP;

	return ;
}

void 			AWeapon::setDamage(int dmg)
{
	this->_damagePoints = dmg;

	return ;
}
