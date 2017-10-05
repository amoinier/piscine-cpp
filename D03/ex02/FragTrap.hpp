/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:04:30 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/05 11:16:29 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

  	FragTrap(std::string name);
  	FragTrap(FragTrap const & src);
  	~FragTrap(void);

	FragTrap& operator=(FragTrap const & rhs);

  	void vaulthunter_dot_exe(std::string const & target);

protected:

private:

};

#endif