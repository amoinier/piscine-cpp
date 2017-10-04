/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:40:36 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 18:46:07 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human human = Human();

	human.action("meleeAttack", "Jimi");
	human.action("rangedAttack", "Florian");
	human.action("intimidatingShout", "Alex");

	human.action("jumpInWater", "Correcteur");

	return 0;
}
