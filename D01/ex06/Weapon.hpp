/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:40:29 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 14:21:36 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

	Weapon(std::string type);
	~Weapon();

	std::string type;

	std::string const & getType(void) const;
	void setType(std::string type);

private:

};

#endif
