/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:46:35 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 14:34:02 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

  SuperMutant(void);
  SuperMutant(SuperMutant const & src);
  virtual ~SuperMutant(void);

  SuperMutant& operator=(SuperMutant const & rhs);

  virtual void takeDamage(int dmg);


private:

};

#endif
