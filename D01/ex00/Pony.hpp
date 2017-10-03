/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:10:01 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 09:38:27 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

public:

	Pony(std::string name);
	~Pony();

	std::string getName();

private:
	std::string	_name;

};

#endif
