/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 09:29:04 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/02 09:49:09 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[]) {
	int i = 0;
	char *string;

	if (argc > 1) {
		for (int j = 1; j < argc; j++) {
			string = (char *)argv[j];
			while (string[i]) {
				string[i] = toupper(string[i]);
				i++;
			}
			i = 0;
			std::cout << string;
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}

	return 0;
}
