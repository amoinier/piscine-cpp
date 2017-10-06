/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:29:49 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 14:33:42 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

  PlasmaRifle(void);
  PlasmaRifle(PlasmaRifle const & src);
  virtual ~PlasmaRifle(void);

  PlasmaRifle& operator=(PlasmaRifle const & rhs);

  void attack() const;

private:

};

#endif
