/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 09:45:49 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 12:51:12 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed {

public:
  Fixed(void);
  Fixed(Fixed const & src);
  ~Fixed(void);

  Fixed & 	operator=(Fixed const & rhs);

  int 		getRawBits(void) const;
  void 		setRawBits(int const raw);

private:
	int _value;
	static const int _bit;
};

#endif
