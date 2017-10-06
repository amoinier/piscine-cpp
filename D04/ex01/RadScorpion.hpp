/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:46:35 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 14:34:04 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

  RadScorpion(void);
  RadScorpion(RadScorpion const & src);
  virtual ~RadScorpion(void);

  RadScorpion& operator=(RadScorpion const & rhs);


private:

};

#endif
