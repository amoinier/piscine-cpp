/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:30:27 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/02 12:30:52 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int main()
{
	Contact books[8];
	std::string buff;
	int exit = 1;
	int nbr = 0;

	while (exit) {
		std::cout << "Type a commande (ADD, SEARCH, EXIT) :" << std::endl;
		std::getline(std::cin, buff);

		if (buff == "EXIT") {
			exit = 0;
		}

		if (buff == "ADD") {
			books[nbr].index = nbr + 1;
			books[nbr].add();
			std::cout << books[nbr].firstname << " " << books[nbr].lastname << " has been added." << std::endl;
			nbr++;
		}

		if (buff == "SEARCH") {
			if (nbr > 0) {
				for (int i = 0; i < nbr; i++) {
					books[i].fastprint();
				}
				std::cout << "Choose an index :" << std::endl;
				std::getline(std::cin, buff);
				if (std::stoi(buff) < 8) {
					if (books[std::stoi(buff) - 1].index) {
						books[std::stoi(buff) - 1].totalprint();
					}
				}
				else {
					std::cout << "Are you kidding me ?" << std::endl;
				}
			}
			else {
				std::cout << "No users in db." << std::endl;
			}
		}
	}

	return 0;
}
