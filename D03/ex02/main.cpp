/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:46:00 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 11:41:07 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap *gyrotrap = new ScavTrap("gyrotrap");
	FragTrap *claptrap = new FragTrap("Claptrap");

	claptrap->rangedAttack("Jack");

	gyrotrap->rangedAttack("Hammerlock");

	claptrap->meleeAttack("Jack");
	claptrap->takeDamage(106);

	gyrotrap->takeDamage(30);

	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->beRepaired(25);
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");

	gyrotrap->challengeNewcomer();
	gyrotrap->challengeNewcomer();
	gyrotrap->challengeNewcomer();

	delete claptrap;
	delete gyrotrap;

	return 0;
}
