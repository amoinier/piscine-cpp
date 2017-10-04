/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:40:16 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 16:48:49 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0) {
  //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
  //std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed::Fixed(int const raw) {
  this->_value = raw << this->_bit;
}

Fixed::Fixed(float const raw) {
  this->_value = roundf(raw * (1 << this->_bit));
}

Fixed::~Fixed() {
  //std::cout << "Destructor called" << std::endl;
}


Fixed & Fixed::operator++(void)
{
	this->_value += 1;

	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
    ++*this;

	return tmp;
}

Fixed & Fixed::operator--(void)
{
	this->_value -= 1;

	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
    ++*this;

	return tmp;
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
	this->setRawBits(rhs.getRawBits());

	return *this;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed  Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}


bool Fixed::operator>(Fixed const & rhs) const
{
	return this->_value > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return this->_value < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return this->_value >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return this->_value <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return this->_value == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return this->_value != rhs.getRawBits();
}


Fixed & 		Fixed::max(Fixed & a, Fixed & b)
{
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

Fixed & 		Fixed::min(Fixed & a, Fixed & b)
{
	if (a <= b) {
		return a;
	}
	else {
		return b;
	}
}

Fixed const & 		Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

Fixed const & 		Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a <= b) {
		return a;
	}
	else {
		return b;
	}
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed)
{
	o << fixed.toFloat();

	return o;
}

const int Fixed::_bit = 8;
