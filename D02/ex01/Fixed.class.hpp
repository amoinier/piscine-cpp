/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:45:49 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 14:17:31 by amoinier         ###   ########.fr       */
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

  Fixed & 	operator=(Fixed const & rhs);

  int 		getRawBits(void) const;
  void 		setRawBits(int const raw);
  float 	toFloat(void) const;
  int		toInt(void) const;

private:
	int _value;
	static const int _bit;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif
