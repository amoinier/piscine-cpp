/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:37:00 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:54:53 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base {

public:

  C(void);
  C(C const & src);
  virtual ~C(void);

  C& operator=(C const & rhs);

private:

};

#endif
