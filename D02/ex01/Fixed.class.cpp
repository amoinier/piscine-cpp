/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:40:16 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 14:17:59 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed(Fixed const & src) : _value(0)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed(const int value) : _value(value)
{
	std::cout << "Int constructor called" << std::endl;

	this->_value = value << this->_bit;

	return;
}

Fixed::Fixed(const float value) : _value(value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_bit));


	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());

	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed)
{
	o << fixed.toFloat();

	return o;
}


int 		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void 		Fixed::setRawBits(int const raw)
{
	this->_value = raw;

	return ;
}

float 	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_bit));
}
int		Fixed::toInt(void) const
{
	return (this->_value >> this->_bit);
}

const int Fixed::_bit = 8;
