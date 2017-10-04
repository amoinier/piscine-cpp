/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:45:49 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 16:45:54 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:
  Fixed(void);
  Fixed(Fixed const & src);
  Fixed(const int value);
  Fixed(const float value);
  ~Fixed(void);

  Fixed&  	operator=(Fixed const & rhs);
  Fixed  	operator+(Fixed const & rhs) const;
  Fixed  	operator-(Fixed const & rhs) const;
  Fixed  	operator*(Fixed const & rhs) const;
  Fixed  	operator/(Fixed const & rhs) const;

  bool	 	operator>(Fixed const & rhs) const;
  bool	 	operator<(Fixed const & rhs) const;
  bool	 	operator>=(Fixed const & rhs) const;
  bool	 	operator<=(Fixed const & rhs) const;
  bool	 	operator==(Fixed const & rhs) const;
  bool	 	operator!=(Fixed const & rhs) const;

  Fixed & 	operator++(void);
  Fixed 	operator++(int);
  Fixed & 	operator--(void);
  Fixed 	operator--(int);


  int 		getRawBits(void) const;
  void 		setRawBits(int const raw);
  float 	toFloat(void) const;
  int		toInt(void) const;

  static Fixed & 		max(Fixed & a, Fixed & b);
  static Fixed &		min(Fixed & a, Fixed & b);

  static Fixed const & 		max(Fixed const & a, Fixed const & b);
  static Fixed const &		min(Fixed const & a, Fixed const & b);

private:
	int _value;
	static const int _bit;
};

std::ostream & 	operator<<(std::ostream & o, Fixed const & fixed);

#endif
