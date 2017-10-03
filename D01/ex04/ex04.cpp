/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 11:33:13 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 11:37:23 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainPtr = &brain;
	std::string& brainRef = brain;

	std::cout << *brainPtr << std::endl;
	std::cout << brainRef << std::endl;
	return 0;
}
