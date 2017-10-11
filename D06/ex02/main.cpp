/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 17:33:12 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:53:26 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int val = rand() % 3;
	Base *base;

	if (val == 0) {
		base = new A();
	}
	else if (val == 1) {
		base = new B();

	}
	else {
		base = new C();
	}

	return base;
}

void identify_from_pointer( Base * p )
{
	A *a = dynamic_cast<A *>(p);

	if (a != NULL) {
		std::cout << "a" << std::endl;
	}
	else {
		B *b = dynamic_cast<B *>(p);
		if (b != NULL) {
			std::cout << "b" << std::endl;
		}
		else {
			C *c = dynamic_cast<C *>(p);
			if (c != NULL) {
				std::cout << "c" << std::endl;
			}
			else {
				std::cout << "not found (only Base ?)" << std::endl;
			}
		}
	}

	return ;
}

void identify_from_reference( Base & p )
{

	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "a" << std::endl;
	}
	catch(std::exception & e) {
		try {
			B &b = dynamic_cast<B &>(p);
			std::cout << "b" << std::endl;
		}
		catch(std::exception & e) {
			try {
				C &c = dynamic_cast<C &>(p);
				std::cout << "c" << std::endl;
			}
			catch(std::exception & e) {
				std::cout << "not found (only Base ?)" << std::endl;
			}
		}
	}

	return ;
}

int main(void)
{
	std::srand(std::time(NULL) + std::clock());

	Base *test = generate();

	identify_from_reference(*test);
	identify_from_pointer(test);

	return 0;
}
