/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:47:20 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 15:25:05 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;

	return ;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src)
{
	*this = src;
	std::cout << "* click click click *" << std::endl;

	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;

	return ;
}


RadScorpion& RadScorpion::operator=(RadScorpion const & rhs)
{
	this->_hitPoints = rhs.getHP();
	this->_type = rhs.getType();

	return *this;
}
