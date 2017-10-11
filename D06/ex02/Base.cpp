/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:36:21 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:54:03 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void)
{

	return ;
}

Base::Base(Base const & src)
{
	*this = src;
	
	return ;
}

Base::~Base(void)
{

	return ;
}

Base& Base::operator=(Base const & rhs)
{
	static_cast<void>(rhs);

	return *this;
}
