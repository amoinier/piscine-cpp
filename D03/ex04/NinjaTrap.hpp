/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:34:10 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:29:02 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

public:

  	NinjaTrap(std::string name);
  	NinjaTrap(NinjaTrap const & src);
  	~NinjaTrap(void);

	NinjaTrap& operator=(NinjaTrap const & rhs);

	void ninjaShoebox(ClapTrap & trap);
	void ninjaShoebox(NinjaTrap & trap);
	void ninjaShoebox(FragTrap & trap);
	void ninjaShoebox(ScavTrap & trap);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

protected:

private:

};

#endif
