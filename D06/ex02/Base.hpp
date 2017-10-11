/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:34:39 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:43:34 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base {

public:

  Base(void);
  Base(Base const & src);
  virtual ~Base(void);

  Base& operator=(Base const & rhs);

private:

};

#endif
