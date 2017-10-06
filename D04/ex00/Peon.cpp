/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:50:59 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 11:23:07 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;

	return ;
}

Peon::Peon(Peon const & src) : Victim(src)
{
	*this = src;

	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;

	return ;
}


Peon& Peon::operator=(Peon const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;

	return ;
}
