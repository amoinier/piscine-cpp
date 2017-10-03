/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:46:26 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 10:31:29 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void announce() const;

private:
	std::string	_type;
	std::string _name;

};

#endif
