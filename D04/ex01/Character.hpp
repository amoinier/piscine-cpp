/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:53:24 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 19:29:53 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARATER_HPP
# define CHARATER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

public:

  Character(std::string const & name);
  Character(Character const & src);
  ~Character(void);

  Character& operator=(Character const & rhs);

  void 			recoverAP();
  void 			setName(std::string name);
  void 			setPointAP(int pointsAP);
  void 			setHaveWeapon(bool wep);
  void 			equip(AWeapon* weap);
  void 			attack(Enemy* &enem);
  std::string 	getName() const;
  AWeapon* 		getWeapon() const;
  int 			getPointsAP() const;
  bool			haveWeapon() const;


private:
	bool 			_haveWeapon;
	std::string 	_name;
	int 			_pointsAP;
	AWeapon* 		_weapon;

	Character(void);

};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
