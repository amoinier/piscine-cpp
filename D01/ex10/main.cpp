/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 19:02:31 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 19:29:41 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[]) {
	char chars;
	std::string line;

	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			std::ifstream ifs(argv[i]);

			if (ifs > 0 && ifs.is_open()) {
				while (ifs >> std::noskipws >> chars) {
					std::cout << chars;
				}

				ifs.close();
			}
			else {
				std::cout << "cato9tails: " << argv[i] << ": No such file or directory" << std::endl;
			}
		}

	}
	else {
		while (getline(std::cin, line)) {
			std::cout << line << std::endl;
		}
		return (0);
	}
}
