/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:36:39 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:54:18 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{

	return ;
}

A::A(A const & src)
{
	*this = src;

	return ;
}

A::~A(void)
{

	return ;
}

A& A::operator=(A const & rhs)
{
	static_cast<void>(rhs);

	return *this;
}
