/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:48:22 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/02 18:40:00 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

static std::string reduceString(std::string str)
{
	int size = str.size();
	std::string space = "";

	if (size == 10) {
		return (str);
	}
	else if (size < 10) {
		for (int i = 0; i < (10 - size); i++) {
			space += " ";
		}

		return (space + str);
	}
	else {
		str = str.substr(0, 9) + ".";

		return (str);
	}
}

void Contact::add(int index)
{
	this->_index = index;

	std::cout << "First name :" << std::endl;
	std::getline(std::cin, this->_firstname);

	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, this->_lastname);

	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, this->_nickname);

	std::cout << "Login :" << std::endl;
	std::getline(std::cin, this->_login);

	std::cout << "Postal address :" << std::endl;
	std::getline(std::cin, this->_postaladdress);

	std::cout << "Email address :" << std::endl;
	std::getline(std::cin, this->_emailaddress);

	std::cout << "Phone number :" << std::endl;
	std::getline(std::cin, this->_phonenumber);

	std::cout << "Birthday date :" << std::endl;
	std::getline(std::cin, this->_birthdaydate);

	std::cout << "Favorite meal :" << std::endl;
	std::getline(std::cin, this->_favoritemeal);

	std::cout << "Underwear color :" << std::endl;
	std::getline(std::cin, this->_underwearcolor);

	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, this->_darkestsecret);

	return ;
}

void Contact::fastprint(void) const
{
	std::cout << "|         " << this->_index << "|";
	std::cout << reduceString(this->_firstname) << "|";
	std::cout << reduceString(this->_lastname) << "|";
	std::cout << reduceString(this->_nickname) << "|" << std::endl;

	return ;
}

void Contact::totalprint(void) const
{
	std::cout << "FirstName       : " << this->_firstname << std::endl;
	std::cout << "LastName        : " << this->_lastname << std::endl;
	std::cout << "NickName        : " << this->_nickname << std::endl;
	std::cout << "Login           : " << this->_login << std::endl;
	std::cout << "Postal address  : " << this->_postaladdress << std::endl;
	std::cout << "Email address   : " << this->_emailaddress << std::endl;
	std::cout << "Phone number    : " << this->_phonenumber << std::endl;
	std::cout << "Birthday date   : " << this->_birthdaydate << std::endl;
	std::cout << "Favorite meal   : " << this->_favoritemeal << std::endl;
	std::cout << "Underwear color : " << this->_underwearcolor << std::endl;
	std::cout << "Darkest secret  : " << this->_darkestsecret << std::endl;

	return ;
}

int Contact::getIndex(void)
{
	return this->_index;
}

std::string Contact::getFirstname(void)
{
	return this->_firstname;
}

std::string Contact::getLastname(void)
{
	return this->_lastname;
}
