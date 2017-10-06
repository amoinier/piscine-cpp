/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:10:41 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 12:59:07 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {

public:

	Victim(std::string name);
	Victim(Victim const & src);
	virtual ~Victim(void);

	Victim& operator=(Victim const & rhs);

	std::string getName(void) const;
	virtual void getPolymorphed(void) const;

protected:
	std::string _name;

private:
	Victim(void);

};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
