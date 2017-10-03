/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:40:23 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 13:48:05 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <sstream>
# include "Brain.hpp"

class Human {

public:
	Human();
	~Human();

	std::string identify(void) const;
	Brain const &	getBrain(void) const;

	Brain const brain;

private:

};

#endif
