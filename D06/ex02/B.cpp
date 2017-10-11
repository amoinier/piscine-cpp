/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:36:45 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:54:22 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void)
{

	return ;
}

B::B(B const & src)
{
	*this = src;

	return ;
}

B::~B(void)
{

	return ;
}

B& B::operator=(B const & rhs)
{
	static_cast<void>(rhs);

	return *this;
}
