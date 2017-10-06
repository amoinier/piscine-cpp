/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:39:42 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 15:23:37 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {

public:
  Enemy(int hp, std::string const & type);
  Enemy(Enemy const & src);
  virtual ~Enemy(void);

  Enemy& operator=(Enemy const & rhs);

  std::string getType() const;
  int getHP() const;
  void 			setType(std::string type);
  void 			setHP(int HP);
  virtual void takeDamage(int dmg);

protected:
	int _hitPoints;
	std::string _type;

private:
	Enemy(void);
};

#endif
