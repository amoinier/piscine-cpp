/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:52:58 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 10:44:50 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type) : type(type)
{
	std::srand(std::time(NULL) + std::clock());

	this->setZombieType(type);

	return ;
}

ZombieEvent::~ZombieEvent()
{

	return ;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;

	return ;
}

Zombie* ZombieEvent::randomChump() const
{
	std::string names[7] = {"Carla", "Bob", "Jimmy", "Michael", "Lola", "Stefany", "Gloria"};

	Zombie* zombie = this->newZombie(names[rand() % 6]);
	zombie->announce();

	return zombie;
}

Zombie* ZombieEvent::newZombie(std::string name) const
{
	Zombie* zombie = new Zombie(name, this->type);

	return zombie;
}
