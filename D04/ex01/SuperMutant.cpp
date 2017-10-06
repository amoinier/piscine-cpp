/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:47:20 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 15:25:15 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;

	return ;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src)
{
	*this = src;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;

	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;

	return ;
}


SuperMutant& SuperMutant::operator=(SuperMutant const & rhs)
{
	this->_hitPoints = rhs.getHP();
	this->_type = rhs.getType();

	return *this;
}

void SuperMutant::takeDamage(int dmg)
{
	dmg = dmg - 3;
	if (dmg > 0) {
		this->_hitPoints = (this->getHP() - dmg) >= 0 ? (this->getHP() - dmg) : 0;
	}

	return ;
}
