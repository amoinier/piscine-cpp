/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:34:10 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:16:42 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

  	ScavTrap(std::string name);
  	ScavTrap(ScavTrap const & src);
  	~ScavTrap(void);

	ScavTrap& operator=(ScavTrap const & rhs);

  	void challengeNewcomer();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	
protected:

private:

};

#endif
