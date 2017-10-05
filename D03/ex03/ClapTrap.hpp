/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:34:10 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 15:08:43 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:

  	ClapTrap(std::string name);
  	ClapTrap(ClapTrap const & src);
  	~ClapTrap(void);

	ClapTrap& operator=(ClapTrap const & rhs);

	bool notDead(void) const;
  	void takeDamage(unsigned int amount);
  	void beRepaired(unsigned int amount);

	unsigned int 	getLevel(void) const;
	unsigned int 	gethitPoints(void) const;
	unsigned int 	getmaxHitPoints(void) const;
	int 			getenergyPoints(void) const;
	int 			getmaxEnergyPoints(void) const;
	int 			getmeleeAttackDamage(void) const;
	int 			getrangedAttackDamage(void) const;
	int 			getarmorDamageReduction(void) const;
	std::string 	getName(void) const;

protected:
	unsigned int level;
	unsigned int hitPoints;
	unsigned int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	std::string name;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

private:

};

#endif
