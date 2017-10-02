/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:26:45 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/02 18:40:09 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {

public:

	Contact();
	~Contact();

	void add(int index);
	void fastprint(void) const;
	void totalprint(void) const;

	int getIndex(void);
	std::string getFirstname(void);
	std::string getLastname(void);

private:

	int			_index;
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _login;
	std::string _postaladdress;
	std::string _emailaddress;
	std::string _phonenumber;
	std::string _birthdaydate;
	std::string _favoritemeal;
	std::string _underwearcolor;
	std::string _darkestsecret;

};

#endif
