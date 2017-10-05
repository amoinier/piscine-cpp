/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:46:00 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:29:34 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	ScavTrap 	*gyrotrap = new ScavTrap("gyrotrap");
	FragTrap 	*claptrap = new FragTrap("Claptrap");
	NinjaTrap 	*ninjatrap = new NinjaTrap("Noonja");
	ClapTrap	*test = new ClapTrap("Test");

	std::cout << std::endl;
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
	ninjatrap->ninjaShoebox(*test);
	ninjatrap->ninjaShoebox(*ninjatrap);
	ninjatrap->ninjaShoebox(*claptrap);
	ninjatrap->ninjaShoebox(*gyrotrap);
	std::cout << std::endl;
	gyrotrap->challengeNewcomer();
	gyrotrap->challengeNewcomer();
	gyrotrap->challengeNewcomer();
	std::cout << std::endl;

	delete claptrap;
	delete gyrotrap;
	delete ninjatrap;
	delete test;

	return 0;
}
