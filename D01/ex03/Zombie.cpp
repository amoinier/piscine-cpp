/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:48:01 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 11:30:49 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A zombie was created." << std::endl;

	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << "(" << this->_type << ")" << " is dead." << std::endl;
	return ;
}

void Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiiiinnsssssss......" << std::endl;
}

void Zombie::init(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;

	return ;
}
