/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:04:30 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 17:23:08 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

public:

  	FragTrap(std::string name);
  	FragTrap(FragTrap const & src);
  	~FragTrap(void);

	FragTrap& operator=(FragTrap const & rhs);

	bool notDead(void) const;
  	void rangedAttack(std::string const & target);
  	void meleeAttack(std::string const & target);
  	void takeDamage(unsigned int amount);
  	void beRepaired(unsigned int amount);
  	void vaulthunter_dot_exe(std::string const & target);

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
	FragTrap(void);

};

#endif
