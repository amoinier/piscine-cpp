/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:46:26 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 11:30:08 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);

	void announce() const;
	void init(std::string name, std::string type);

private:
	std::string	_type;
	std::string _name;

};

#endif
