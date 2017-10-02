/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:30:27 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/02 18:33:25 by amoinier         ###   ########.fr       */
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
		std::cout << "Type a command (ADD, SEARCH, EXIT) :" << std::endl;
		std::getline(std::cin, buff);

		if (buff == "EXIT") {
			exit = 0;
		}

		else if (buff == "ADD") {
			if (nbr < 8) {
				books[nbr].add(nbr + 1);
				std::cout << books[nbr].getFirstname() << " " << books[nbr].getLastname() << " has been added." << std::endl;
				nbr++;
			}
			else {
				std::cout << "Sorry, too much users." << std::endl;
			}

		}

		else if (buff == "SEARCH") {
			if (nbr > 0) {
				std::cout << "|     INDEX| FirstName|  LastName|  NickName|" << std::endl;
				std::cout << "|----------|----------|----------|----------|" << std::endl;
				for (int i = 0; i < nbr; i++) {
					books[i].fastprint();
				}

				std::cout << "Choose an index :" << std::endl;
				std::getline(std::cin, buff);
				int ind = std::atoi(buff.c_str());

				if (ind > 0 && ind <= nbr) {
					books[ind - 1].totalprint();
				}
				else {
					std::cout << "Segmentation fault... No sorry, it's a joke" << std::endl;
				}
			}
			else {
				std::cout << "No users in db." << std::endl;
			}
		}

		else {
			std::cout << "Bad command, try an other (ADD, SEARCH, EXIT) :" << std::endl;
		}
	}

	return 0;
}
