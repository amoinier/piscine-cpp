/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:04:30 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 17:16:37 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

  	FragTrap(std::string name);
  	FragTrap(FragTrap const & src);
  	~FragTrap(void);

	FragTrap& operator=(FragTrap const & rhs);

  	void vaulthunter_dot_exe(std::string const & target);
	void rangedAttack(std::string const & target);
  	void meleeAttack(std::string const & target);

protected:

private:
	FragTrap(void);

};

#endif
