/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 13:52:45 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/12 10:13:19 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void iter(T * array, int length, void (*f)(T const &))
{
	for (int i = 0; i < length; i++) {
		f(array[i]);
	}

	return ;
}

template<typename T>
void print(T str) {
	std::cout << str << std::endl;
}

int main(void) {
	std::string names[4] = {"Jimi", "Alex", "Florian", "Alexandre"};
	int nbr[4] = {1, 2, 3, 4};

	::iter(nbr, 4, print);
	::iter(names, 4, print);

	return (0);
}
