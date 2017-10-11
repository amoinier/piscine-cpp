/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 15:00:15 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:16:14 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.template.hpp"

int main(void)
{
	Array<int> 				test(5);
	Array<std::string> 		str(5);
	Array<std::string> 		empty;
	Array<std::string> 		copy(empty);

	std::cout << "-------------" << std::endl;

	try {
		test[2] = 2;
		std::cout << test[2] << " INT 2" << std::endl;
	}
	catch(std::exception & e) {
		std::cout << "Size too small" << std::endl;
	}

	try {
		test[6] = 6;
		std::cout << test[6] << " INT 2" << std::endl;
	}
	catch(std::exception & e) {
		std::cout << "Size too small" << std::endl;
	}

	try {
		str[1] = "hello";
		std::cout << str[1] << " INT 2" << std::endl;
	}
	catch(std::exception & e) {
		std::cout << "Size too small" << std::endl;
	}

	std::cout << "-------------" << std::endl;

	return 0;
}
