/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 14:08:18 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 19:33:10 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* zaz = new Character("zaz");

	Enemy* scorpion = new RadScorpion();
	Enemy* mutant = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << *zaz;
	zaz->attack(mutant);
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(mutant);
	zaz->equip(pf);
	std::cout << *zaz;
	zaz->attack(mutant);
	zaz->attack(mutant);
	zaz->attack(mutant);
	zaz->attack(mutant);
	std::cout << std::endl;
	zaz->attack(mutant);
	zaz->attack(scorpion);
	std::cout << *zaz;
	zaz->recoverAP();
	zaz->attack(scorpion);

	delete zaz;
	delete pr;
	delete pf;

	return 0;
}
