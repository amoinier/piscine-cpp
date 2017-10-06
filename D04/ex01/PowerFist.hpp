/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:29:49 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 14:33:45 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

  PowerFist(void);
  PowerFist(PowerFist const & src);
  virtual ~PowerFist(void);

  PowerFist& operator=(PowerFist const & rhs);

  void attack() const;

private:

};

#endif
