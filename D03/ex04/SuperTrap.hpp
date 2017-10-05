/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:34:10 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:45:05 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {

public:

  	SuperTrap(std::string name);
  	SuperTrap(SuperTrap const & src);
  	~SuperTrap(void);

	SuperTrap& operator=(SuperTrap const & rhs);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;

protected:

private:

};

#endif
