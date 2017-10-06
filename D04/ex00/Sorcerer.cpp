/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 09:33:55 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 12:54:11 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;

	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	std::cout << src.getName() << ", " << src.getTitle() << ", is born !" << std::endl;
	*this = src;

	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same !" << std::endl;

	return ;
}

std::string Sorcerer::getName(void) const
{
	return this->_name;
}

std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

void Sorcerer::polymorph(Victim const & target) const
{
	target.getPolymorphed();

	return ;
}

Sorcerer& Sorcerer::operator=(Sorcerer const & rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();

	return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;

	return o;
}
