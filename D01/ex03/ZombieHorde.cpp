/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:52:50 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 11:31:18 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::srand(std::time(NULL) + std::clock());
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombies[i].init(randomName(), randomType());
		zombies[i].announce();
	}

	this->_zombies = zombies;

	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
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
