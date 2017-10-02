/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:48:22 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/02 12:33:39 by amoinier         ###   ########.fr       */
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

std::string reduceString(std::string str)
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

void Contact::add(void)
{
	std::cout << "First name :" << std::endl;
	std::getline(std::cin, this->firstname);

	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, this->lastname);

	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, this->nickname);

	std::cout << "Login :" << std::endl;
	std::getline(std::cin, this->login);

	std::cout << "Postal address :" << std::endl;
	std::getline(std::cin, this->postaladdress);

	std::cout << "Email address :" << std::endl;
	std::getline(std::cin, this->emailaddress);

	std::cout << "Phone number :" << std::endl;
	std::getline(std::cin, this->phonenumber);

	std::cout << "Birthday date :" << std::endl;
	std::getline(std::cin, this->birthdaydate);

	std::cout << "Favorite meal :" << std::endl;
	std::getline(std::cin, this->favoritemeal);

	std::cout << "Underwear color :" << std::endl;
	std::getline(std::cin, this->underwearcolor);

	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, this->darkestsecret);

	return ;
}

void Contact::fastprint(void)
{
	std::cout << "         " << this->index << "|";
	std::cout << reduceString(this->firstname) << "|";
	std::cout << reduceString(this->lastname) << "|";
	std::cout << reduceString(this->nickname) << "|" << std::endl;

	return ;
}

void Contact::totalprint(void)
{
	std::cout << this->firstname << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postaladdress << std::endl;
	std::cout << this->emailaddress << std::endl;
	std::cout << this->phonenumber << std::endl;
	std::cout << this->birthdaydate << std::endl;
	std::cout << this->favoritemeal << std::endl;
	std::cout << this->underwearcolor << std::endl;
	std::cout << this->darkestsecret << std::endl;

	return ;
}
