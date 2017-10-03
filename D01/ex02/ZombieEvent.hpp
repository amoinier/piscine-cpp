/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:55:03 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 10:43:39 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {

public:
	ZombieEvent(std::string type);
	~ZombieEvent(void);

	std::string type;

	void 		setZombieType(std::string type);
	Zombie* 	newZombie(std::string name) const;
	Zombie* 	randomChump() const;

};

#endif
