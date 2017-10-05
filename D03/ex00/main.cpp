/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:46:00 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 10:40:43 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap *claptrap = new FragTrap("Claptrap");

	claptrap->rangedAttack("Jack");
	claptrap->meleeAttack("Jack");
	claptrap->takeDamage(105);
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->beRepaired(25);
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	claptrap->vaulthunter_dot_exe("Jack");
	delete claptrap;

	return 0;
}
