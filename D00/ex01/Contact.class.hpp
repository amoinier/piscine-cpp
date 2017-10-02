/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:26:45 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/02 12:10:54 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {

public:

	int			index;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string postaladdress;
	std::string emailaddress;
	std::string phonenumber;
	std::string birthdaydate;
	std::string favoritemeal;
	std::string underwearcolor;
	std::string darkestsecret;

	Contact();
	~Contact();

	void add(void);
	void fastprint(void);
	void totalprint(void);
};

#endif
