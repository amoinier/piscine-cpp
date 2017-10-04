/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:52:50 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 18:16:54 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _zombieNbr(N)
{
	std::cout << "Horde with " << N << " zombie(s) arrive !" << std::endl;
	std::srand(std::time(NULL) + std::clock());
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombies[i].init(randomName(), randomType());
	}
	this->_zombies = zombies;
	this->announce();

	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;

	std::cout << "Horde disappear..." << std::endl;
	return ;
}

std::string ZombieHorde::randomName() const
{
	std::string names[7] = {"Carla", "Bob", "Jimmy", "Michael", "Lola", "Stefany", "Gloria"};

	return names[rand() % 6];
}

std::string ZombieHorde::randomType() const
{
	std::string type[7] = {"Splitter", "Hunter", "Boomer", "Smocker", "Tank", "Charger", "Jockey"};

	return type[rand() % 6];
}

void 		ZombieHorde::announce() const
{
	for (int i = 0; i < this->_zombieNbr; i++) {
		this->_zombies[i].announce();
	}

	return ;
}
