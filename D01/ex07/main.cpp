/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:41:20 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 18:43:54 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[]) {

	if (argc == 4 && std::string(argv[1]) != "") {
		size_t index = 0;
		char line;
		std::ifstream ifs(argv[1]);
		std::stringstream name;
		std::string test = "";
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (s1 != "" && s2 != "" && ifs > 0) {
			name << argv[1] << ".replace";

			while (ifs >> std::noskipws >> line) {
				test += line;
			}

			while (true) {
				index = test.find(s1, index);
				if (index == std::string::npos) {
					break;
				}
				test.replace(index, s1.size(), s2);
				index += s2.size();
			}

			std::ofstream ofs(name.str());
			if (ofs) {
				ofs << test;
				ofs.close();
			}
			else {
				std::cout << "No space disk" << std::endl;
			}
			ifs.close();
			return (0);
		}
		else {
			std::cout << "File doesn't exists or empty string" << std::endl;
			return (0);
		}
	}
	else {
		std::cout << "Problem with arg(s) or filename is empty" << std::endl;
		return (0);
	}
}
