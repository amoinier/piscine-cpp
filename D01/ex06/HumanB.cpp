/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:59:07 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 14:38:48 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
