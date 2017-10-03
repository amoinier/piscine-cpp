/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:27:13 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 10:59:35 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent witch = ZombieEvent("Witch");

	Zombie* witchZombie = witch.randomChump();
	witch.setZombieType("Gerbeur");
	Zombie* gerbeurZombie = witch.randomChump();

	ZombieEvent hunter = ZombieEvent("Hunter");
	Zombie* hunterZombie = hunter.randomChump();

	delete witchZombie;
	delete hunterZombie;
	delete gerbeurZombie;

	return 0;
}
