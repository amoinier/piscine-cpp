/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:48:01 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 18:56:13 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _type(type), _name(name)
{
	std::cout << "Zombie " << name  << " was created." << std::endl;

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
