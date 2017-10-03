/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:10:04 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 09:51:34 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
	std::cout << "The pony " << name << " challenge you !" << std::endl;

	return ;
}

Pony::~Pony(void)
{
	std::cout << "Oh no ! the pony " << this->getName() <<" has ran away !" << std::endl;

	return ;
}

std::string Pony::getName()
{
	return this->_name;
}
