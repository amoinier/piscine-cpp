/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:13:23 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 15:23:28 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {

public:
  AWeapon(std::string const & name, int apcost, int damage);
  AWeapon(AWeapon const & src);
  virtual ~AWeapon(void);

  AWeapon& operator=(AWeapon const & rhs);

  std::string 	getName() const;
  int 			getAPCost() const;
  int 			getDamage() const;
  void 			setName(std::string name);
  void 			setAPCost(int costAP);
  void 			setDamage(int dmg);
  virtual void 	attack() const = 0;

private:
	std::string 	_name;
	int 			_damagePoints;
	int				_costAP;

	AWeapon(void);
};

#endif
