/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:09:58 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 09:37:33 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheHeap(void)
{
	Pony* ponyHeap = new Pony("Petit_Tonerre");

	delete ponyHeap;
	return ;
}

static void ponyOnTheStack(void)
{
	Pony ponyStack = Pony("Chocolat");

	return ;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << "Where are ponies ?" << std::endl;

	return 0;
}
