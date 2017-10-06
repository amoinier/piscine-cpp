/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:41:50 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 15:23:06 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hitPoints(hp), _type(type)
{

	return ;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;

	return ;
}

Enemy::~Enemy(void)
{

	return ;
}


Enemy& Enemy::operator=(Enemy const & rhs)
{
	this->setHP(rhs.getHP());
	this->setType(rhs.getType());

	return *this;
}


std::string /*[...]*/ Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hitPoints;
}

void Enemy::takeDamage(int dmg)
{
	if (dmg > 0) {
		this->setHP((this->getHP() - dmg) >= 0 ? (this->getHP() - dmg) : 0);
	}

	return ;
}

void 			Enemy::setType(std::string type)
{
	this->_type = type;

	return ;
}

void 			Enemy::setHP(int HP)
{
	this->_hitPoints = HP;

	return ;
}
