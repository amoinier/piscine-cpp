/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:40:31 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 13:25:22 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	return ;
}

Brain::~Brain()
{
	return ;
}

std::string Brain::identify(void) const
{
	std::stringstream stt;
	stt << this;

	return stt.str();
}
