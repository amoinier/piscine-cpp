/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:49:51 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 12:59:34 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

public:
	Peon(std::string name);
	Peon(Peon const & src);
	virtual ~Peon(void);

	Peon& operator=(Peon const & rhs);

	virtual void getPolymorphed(void) const;

private:
	Peon(void);

};

#endif
