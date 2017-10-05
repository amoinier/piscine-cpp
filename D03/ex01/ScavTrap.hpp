/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:34:10 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 11:02:05 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {

public:

  	ScavTrap(std::string name);
  	ScavTrap(ScavTrap const & src);
  	~ScavTrap(void);

	ScavTrap& operator=(ScavTrap const & rhs);

	bool notDead(void) const;
  	void rangedAttack(std::string const & target);
  	void meleeAttack(std::string const & target);
  	void takeDamage(unsigned int amount);
  	void beRepaired(unsigned int amount);
  	void challengeNewcomer();

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
