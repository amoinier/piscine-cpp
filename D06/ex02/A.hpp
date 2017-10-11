/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:34:53 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:54:43 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base {

public:

  A(void);
  A(A const & src);
  virtual ~A(void);

  A& operator=(A const & rhs);

private:

};

#endif
