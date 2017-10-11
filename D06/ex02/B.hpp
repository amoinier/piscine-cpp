/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:36:50 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:54:48 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base {

public:

  B(void);
  B(B const & src);
  virtual ~B(void);

  B& operator=(B const & rhs);

private:

};

#endif
