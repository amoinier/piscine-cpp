/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 10:29:51 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/09 11:56:16 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat* bureau = new Bureaucrat("Flom", 1);
		std::cout << *bureau;
		delete bureau;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}

	try
	{
		Bureaucrat* bureau = new Bureaucrat("Flom", 1);
		std::cout << *bureau;
		bureau->incrementGrade();
		std::cout << *bureau;
		delete bureau;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}

	try
	{
		Bureaucrat* bureau = new Bureaucrat("Flom", 0);
		std::cout << *bureau;
		delete bureau;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}

	try
	{
		Bureaucrat* bureau = new Bureaucrat("Flom", 151);
		std::cout << *bureau;
		delete bureau;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}

	return 0;
}
