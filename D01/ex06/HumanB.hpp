/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:40:29 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 14:38:59 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB();

	void attack(void) const;
	void setWeapon(Weapon& weapon);

private:

	std::string 	_name;
	Weapon*			_weapon;
};

#endif
