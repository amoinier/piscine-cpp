/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:46:00 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 18:09:30 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	ScavTrap 	*gyrotrap = new ScavTrap("Gyrotrap");
	FragTrap 	*claptrap = new FragTrap("Claptrap");
	NinjaTrap 	*ninjatrap = new NinjaTrap("Noonja");
	ClapTrap	*test = new ClapTrap("Test");
	SuperTrap	*supertrap = new SuperTrap("Megazord");

	std::cout << std::endl;
	std::cout << supertrap->getenergyPoints() << std::endl;
	claptrap->rangedAttack("Jack");
	std::cout << std::endl;
	gyrotrap->rangedAttack("Hammerlock");
	std::cout << std::endl;
	claptrap->meleeAttack("Jack");
	claptrap->takeDamage(106);
	std::cout << std::endl;
	gyrotrap->takeDamage(30);
	std::cout << std::endl;
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->beRepaired(25);
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	std::cout << std::endl;
	gyrotrap->challengeNewcomer();
	gyrotrap->challengeNewcomer();
	gyrotrap->challengeNewcomer();
	std::cout << std::endl;
	ninjatrap->ninjaShoebox(*test);
	ninjatrap->ninjaShoebox(*ninjatrap);
	ninjatrap->ninjaShoebox(*claptrap);
	ninjatrap->ninjaShoebox(*gyrotrap);
	std::cout << std::endl;
	supertrap->ninjaShoebox(*claptrap);
	supertrap->vaulthunter_dot_exe("Hector");
	std::cout << std::endl;
	supertrap->rangedAttack("OnFrag");
	supertrap->meleeAttack("OnNinja");
	std::cout << std::endl;

	delete claptrap;
	delete gyrotrap;
	delete ninjatrap;
	delete test;
	delete supertrap;

	return 0;
}
