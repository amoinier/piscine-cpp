/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:35:19 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 14:46:56 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

	return ;
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src)
{
	*this = src;

	return ;
}

PowerFist::~PowerFist(void)
{

	return ;
}


PowerFist& PowerFist::operator=(PowerFist const & rhs)
{
	this->setName(rhs.getName());
	this->setAPCost(rhs.getAPCost());
	this->setDamage(rhs.getDamage());

	return *this;
}


void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;

	return ;
}
