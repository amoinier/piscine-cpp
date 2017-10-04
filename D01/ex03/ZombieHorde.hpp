/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:51:49 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 18:10:01 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

public:
	ZombieHorde(int N);
	~ZombieHorde(void);

	std::string randomName(void) const;
	std::string randomType(void) const;
	void 		announce(void) const;

private:
	Zombie* _zombies;
	int		_zombieNbr;
};

#endif
