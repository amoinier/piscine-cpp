/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:40:26 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 13:48:35 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : brain(Brain())
{
	return ;
}

Human::~Human()
{
	return ;
}

Brain const & Human::getBrain() const
{
	return this->brain;
}

std::string Human::identify(void) const
{
	return this->brain.identify();
}
