/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:59:03 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 14:37:14 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{

}

Weapon::~Weapon(void)
{

}

std::string const & Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
