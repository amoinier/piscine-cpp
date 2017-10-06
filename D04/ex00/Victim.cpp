/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:30:21 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 12:51:15 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;

	return ;
}

Victim::Victim(Victim const & src)
{
	*this = src;
	std::cout << "Some random victim called " << src.getName() << " just popped !" << std::endl;

	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
	return ;
}

std::string Victim::getName(void) const
{
	return this->_name;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;

	return ;
}


Victim& Victim::operator=(Victim const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;

	return o;
}
