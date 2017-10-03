/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 18:12:22 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 18:51:07 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void)
{
	Logger logger = Logger("test1");

	logger.log("console", "salut");
	logger.log("file", "Test_file");
	logger.log("file", "Test_file_2");
	logger.log("console", "Coucou");

	return 0;
}
