/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:35:19 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 14:46:46 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{

	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src)
{
	*this = src;

	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{

	return ;
}


PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	this->setName(rhs.getName());
	this->setAPCost(rhs.getAPCost());
	this->setDamage(rhs.getDamage());

	return *this;
}


void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;

	return ;
}
