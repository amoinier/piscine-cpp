/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 09:25:34 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/06 11:22:00 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {

public:

	Sorcerer(std::string, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer(void);

	Sorcerer& operator=(Sorcerer const & rhs);

	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const & target) const;

protected:

private:
	Sorcerer(void);

	std::string _name;
	std::string _title;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
