/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:40:29 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 14:37:47 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack(void) const;

private:

	std::string 	_name;
	Weapon&	 		_weapon;
};

#endif
