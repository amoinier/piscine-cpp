/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:37:16 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:54:26 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{

	return ;
}

C::C(C const & src)
{
	*this = src;

	return ;
}

C::~C(void)
{

	return ;
}

C& C::operator=(C const & rhs)
{
	static_cast<void>(rhs);

	return *this;
}
