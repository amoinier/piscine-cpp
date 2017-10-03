/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:27:28 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 18:05:01 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << target << " has been attacked." << std::endl;

	return ;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << target << " has been ranged attack." << std::endl;

	return ;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << target << " has been intimidated by a shout." << std::endl;

	return ;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	typedef void (Human::*Func)(std::string const & target);
    Func func[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string actionString[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++) {
		if (actionString[i] == action_name) {
			(this->*func[i])(target);
			break ;
		}
	}
	return ;
}
