/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:59:05 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 14:38:06 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
